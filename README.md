# Arduino - Temperature and Humidity detector

This is a simple project to create a wifi weather station to measure temperature and humidity.
The wifi module (ESP8266) will act as wifi spot. Through an RemoteXY app you will be able to connect to Arduino and see temperature and humidity.
The UI will show temperature, humidity in numbers, a graph updating the measures in time (every 5 sec but you can change the delay in the .ino code),
and an arch updating with the temperature number.

PIECES:

- Arduino Uno (sometimes the 3.3v output of the Uno will not be enough to power the ESP8266)
- DHT11 (or others) temperature and humidity sensor (if using a DHT22 for example, refer to my other repo to see how the code bahaves (https://github.com/pitbull36/ard_temp_humidity_DHT22))
- ESP8266 wifi module

The wiring image shows how to wire the pieces together. 

![alt text](https://github.com/pitbull36/wifi_weather_station/blob/master/wifi_weather_station.png?raw=true)

The code is in the .ino file. This contains the RemoteXY app too and uses the RemoteXY libraries.