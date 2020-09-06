# Arduino - Temperature and Humidity detector (with DHT11 or DHT22)

This is a simple project to create a wifi weather station to measure temperature and humidity.
The wifi module (ESP8266) will act as wifi spot. Through an RemoteXY app you will be able to connect to Arduino and see temperature and humidity.
The UI will show temperature, humidity in numbers, a graph updating the measures in time (every 5 sec but you can change the delay in the .ino code),
and an arch updating with the temperature number.

PIECES:

- Arduino Uno (sometimes the 3.3v output of the Uno will not be enough to power the ESP8266)
- DHT11 (or others) temperature and humidity sensor (if using a DHT22 for example, refer to the DHT22 ino code in the relative folder)
- ESP8266 wifi module

The wiring image shows how to wire the pieces together. 

IMPORTANT: when you upload the code onto the Arduino, be sure to disconnect temporarily the TX or RX wires (pin 0 or 1) from the Arduino or it will be impossible to upload the code.
After the upload, put back the wire into the correct pin.

![alt text](https://github.com/pitbull36/wifi_weather_station/blob/master/wifi_weather_station.png?raw=true)

The code is in the .ino file. This contains the RemoteXY app too and uses the RemoteXY libraries.

Here is hot it appears:

![alt text](https://github.com/pitbull36/wifi_weather_station/blob/master/arduino.jpg?raw=true)

And the app view:

![alt text](https://github.com/pitbull36/wifi_weather_station/blob/master/app_view.png?raw=true)
