# IoT-control-panel

## Dependencies

- Python 3
- [Platformio](https://platformio.org/)

## Quick Start

### Create Python virtual enviroment

#### GNU/Linux

```
$ git clone https://github.com/KNaiskes/IoT-control-panel
$ cd IoT-control-panel
$ python -m venv venv
$ source venv/bin/activate
```

### Install Dependencies

```
$ pip install -r requirements.txt
```

### Upload Code to a Board

```
$ cd to/the/board/project/directory/
$ sudo chmod 777 /dev/ttyUSB0
$ platformio run --target upload
```

## Troubleshooting

Sometimes a board may keep old code, binaries or configs in memory. As result there may be conflicts.
The solution for such issues is to erase everything from the memory (ex using [esptool](https://github.com/espressif/esptool)).

### Install esptool

```
$ pip install esptool
```

### Erase everything from memory

```
esptool.py --port /dev/ttyUSB0 erase_flash
```

**Note:** You may have to change the port accordingly to your system.
