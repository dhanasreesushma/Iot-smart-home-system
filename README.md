# Iot-smart-home-system
# Smart Home Automation System (Blynk IoT + ESP32)

## Overview
This project is an IoT-based Smart Home system using ESP32 and Blynk IoT platform to control 3 bulbs remotely via mobile application.

## Features
- Control 3 bulbs using smartphone
- Real-time switching
- WiFi-based communication
- Simple IoT dashboard using Blynk

## Hardware Required
- ESP32
- 3-Channel Relay Module
- 3 Bulbs
- Power Supply

## Software Required
- Blynk IoT Mobile App
- Arduino IDE

## Blynk Virtual Pins
- V0 → Bulb 1
- V1 → Bulb 2
- V2 → Bulb 3

## Working Principle
ESP32 connects to WiFi and Blynk cloud. The mobile app sends ON/OFF commands through virtual pins which control relay switches connected to bulbs.

## Output
Each bulb can be controlled individually from mobile app.
