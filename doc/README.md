

![Austral Ingenieria](https://encrypted-tbn0.gstatic.com/images?q=tbn%3AANd9GcQooGo7vQn4t9-6Bt46qZF-UY4_QFpYOeh7kVWzwpr_lbLr5wka)


# Project 06-pote-servo

    Electronica Digital - Austral 2023 - EAM
    
##  Servo rotates controlled by a potentiometer

    Using ESP32 development board

### Hardware

    1 Micro Servo Motor S0009 or Tower Pro MG 996R
    1 Potentiometer
    Jumper wires

###  Connections

    Connect VCC  in Servo to red wire
    Connect GND  in Servo to brown wire
    Connect GPIO "MY_SERVO" to Servo SIGNAL orange wire

    Connect potentiometer ends between GND and 3.3 volt
    Connect potentiometer cursor to GPIO "ANAIN" (see platformio.ini)

###  Verification

    Servo rotates controlled by a potentiometer
    When angle changes, it is printed on serial monitor

###  Links

[ESP32 i/o - ESP32 Servo Motor controlled by a Potentiometer](https://esp32io.com/tutorials/esp32-servo-motor-controlled-by-potentiometer)

[PlatformIO docs - Library Management](https://docs.platformio.org/en/stable/librarymanager/index.html)

[PlatformIO Community - How to include Arduino Library in PlatformIO](https://community.platformio.org/t/how-to-include-arduino-library-in-platformio/15146)


### Videos

[Como funciona un servomotor](https://www.youtube.com/watch?v=mk9UkQCeENc&t=211s)

[Control de SERVOMOTOR con ESP32 + POTENCIOMETRO](https://www.youtube.com/watch?v=dxUKUyCuP8k)

[Using Servo Motors - SG90 (ESP32 + PlatformIO) Shows how to load a library](https://www.youtube.com/watch?v=dJAlkrXbfbQ)
        


