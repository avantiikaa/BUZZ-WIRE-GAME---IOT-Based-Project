
# IOT-Based-Project - Buzz Wire Game - Arduino Implementation

This project recreates the Buzz Wire Game as per your project specifications.

## Features

- Buzzer sounds when loop touches the wire.
- 3 touches allowed per attempt.
- After 3 touches, player must restart.
- 2 retries are given before game over.

## Components

- Arduino Uno
- Buzzer
- Copper wire (bent into maze)
- Loop wire with handle
- 9V battery
- ON/OFF switch

## Wiring

| Component         | Arduino Pin     |
|-------------------|-----------------|
| Buzzer +          | Pin 8           |
| Buzzer -          | GND             |
| Loop Wire         | Pin 7 to GND    |
| Start Button      | Pin 6 to GND    |

## How to Run

1. Upload `buzz_wire_game.ino` to Arduino.
2. Connect your components as per wiring diagram.
3. Press the start button to begin.
4. Move the loop across the maze without touching.
5. After 3 touches, you must restart.
6. After 2 retries, the game ends.

## Principle

Electricity flows only when the loop touches the wire, completing the circuit and triggering the buzzer.

## License

Free to use for educational purposes.
