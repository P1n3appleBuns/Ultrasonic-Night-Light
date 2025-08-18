# Ultrasonic Night Light

This project is an Ultrasonic Night Light that automatically activates LED lights for a set period of time when motion or proximity is detected. It is a simple, beginner-friendly Arduino project that demonstrates the use of ultrasonic sensors for distance measurement and basic automation with microcontrollers.

# Features
* Automatic LED Activation: Turns on LED lights when an object or person passes within a specified distance range.

* Timed Lighting: LEDs remain lit for a configurable duration before turning off automatically.

* Energy Efficient: Lights are only activated when movement is detected, reducing unnecessary power consumption.

* Adjustable Detection Range: Sensor distance threshold can be easily modified in the code to suit different setups.

# Components Used
* Arduino UNO (Microcontroller board)

* Ultrasonic Distance Sensor (Detects object proximity)

* LED(s) (Night light output)

* Resistors (Current limiting for LEDs)

* Breadboard and jumper wires (Prototyping connections)

* (Optional) External Power Supply for standalone operation

# How It Works
1. The ultrasonic sensor continuously measures the distance between itself and nearby objects.

2. When an object is detected within the set threshold distance (e.g., 20 cm), the Arduino triggers the LEDs to turn on.

3. The LEDs remain on for a predefined duration (e.g., 10 seconds) and then turn off automatically until the next detection.

4. This creates a hands-free, automatic night light experience ideal for dark rooms, hallways, or closets.

# Code Overview
The Arduino code uses the NewPing library (or built-in pulse measurement) to read distance data from the ultrasonic sensor. A simple if-else logic checks for objects within range and toggles the LED state.

# Applications
* Automatic night lights in hallways or bedrooms

* Motion-activated lights for dark storage spaces or closets

* Entryway illumination when someone approaches

# Future Improvements
* Add a PIR motion sensor for more reliable human detection

* Implement brightness control (PWM) based on ambient light

* Power using a battery pack for portability

* Encase the circuit in a 3D-printed housing for a polished look
