#ifndef CONFIG_H
#define CONFIG_H

// network
extern const char* ssid = "";
extern const char* password = "";

// mqtt
extern const char* mqttServer = "";
extern const int   mqttPort   = 1883;

extern const char *mqttId = "someFriendlyId";
extern const char *mqttUser = "";
extern const char *mqttPass = "";
//const char *mqttTopic = "relays/topicName";
extern const char *mqttTopic = "topicName";

extern const int relayChannel = 5;

#endif
