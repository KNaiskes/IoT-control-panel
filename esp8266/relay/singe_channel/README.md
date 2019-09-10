# Esp8266 - Single Channel Relay

## Dependencies

- [PubSubClient](https://platformio.org/lib/show/89/PubSubClient)

### Install Dependencies

```
$ pio lib install "PubSubClient"
```

## Wiring Esp8266 with the relay

| Esp8266  | Relay              |
|----------|:-------            |
| D1       | IN                 |
| GND      | DC- (GND)          |
| 3v3      | DC+ (VCC)          |

## Relay Interfaces

|Relay Outputs | Description                |
| NO           | Normally Open Interface    |
| COM          | Common Interface           |
| NC           | Normally closed Interface  |
