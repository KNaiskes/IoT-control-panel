#include <ESP8266WiFi.h>
#include <PubSubClient.h>

// network
const char* ssid = "";
const char* password = "";

// mqtt
const char* mqttServer = "";
const int   mqttPort   = 1883;

const char *mqttId = "someFriendlyId";
//const char *mqttUser = "";
//const char *mqttPass = "";
const char *mqttTopic = "relays/topicName";

const int relayChannel = 5;

WiFiClient esp8266Client;
PubSubClient client(esp8266Client);

void callback(char* topic, byte* payload, unsigned int length) {
    if(strcmp(mqttTopic, topic) == 0) {
        String receivedMessage;

        for(int i = 0; i < length; i++) {
            receivedMessage = receivedMessage + (char)payload[i];
        }

        if(receivedMessage == "ON") digitalWrite(relayChannel, LOW);
        else if(receivedMessage == "OFF") digitalWrite(relayChannel, HIGH);
    }
}

void reconnect() {
    // Loop until we're reconnected
    while (!client.connected()) {
        // Attempt to connect
        //if (client.connect(mqttId, mqttUser, mqttPass)) {
        if (client.connect(mqttId)) {
            // Once connected, publish an announcement...
            client.publish(mqttTopic, "Connected successfully");
            // ... and resubscribe
            client.subscribe(mqttTopic);
        }
    }
}

void setup() {
    pinMode(relayChannel, OUTPUT);
    digitalWrite(relayChannel, HIGH);
    WiFi.begin(ssid, password);
    client.setServer(mqttServer, mqttPort);
    client.setCallback(callback);
}

void loop() {
    if(!client.connected()) {
        reconnect();
    }
    client.loop();
}
