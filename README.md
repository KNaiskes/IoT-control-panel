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
