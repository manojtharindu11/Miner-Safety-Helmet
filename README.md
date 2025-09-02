# Miner Safety Helmet Project

## Introduction
Welcome to the repository for our groundbreaking microcontroller-based hardware project – **Miner Safety Helmet**. This project represents a significant milestone in our commitment to enhancing miner safety and revolutionizing the mining industry.

## Project Overview
We are excited to unveil our remarkable first-year microcontroller-based hardware project: **Miner Safety Helmet**. This helmet is designed to empower miners with advanced safety features that go beyond traditional measures.

## Features
- **Connecting Beyond Depths:** The Miner Safety Helmet is a beacon of innovation powered by Arduino and the NRF24L01 module. It seamlessly unites miners through two-way voice communication, transcending communication barriers even in the heart of the earth.

- **A Glimpse into the Future:** Our helmet goes beyond voice communication by monitoring miner conditions within the mine. It relays real-time data to an LCD display, making safety an unwavering commitment.

- **Extending Horizons:** To ensure comprehensive coverage, we've developed a cutting-edge repeater that pushes the boundaries of distance. Miner safety knows no bounds with this technology.

- **Shaping Safer Tomorrows:** Every innovation weaves a new thread of safety into the mining fabric. Join us in celebrating a year of progress, commitment, and a step closer to safer mines.

## Setting Up the Project

1. Clone or download the repository.
2. Set up the Arduino environment and import the necessary libraries.
3. Connect the MQ4, MQ7, DHT22, and NRF-24L01 modules according to the provided schematic.
4. Upload the code to your Arduino board.

## Starting Communication

1. Power on the transmitter and receiver together.
2. During the first 10 seconds, the sensor values will be transmitted to the receiver and displayed on the LCD display.
3. Press the push button to engage in two-way communication (half-duplex).
4. After 2.5 minutes, the sensor values will be transmitted again. This process will continue.
5. To use the repeater first turn on repeater mode on both sides. Repeater repeated sensor values only.

## Team and Acknowledgments
This achievement is a testament to the relentless dedication of our exceptional team. We extend our gratitude to everyone who has contributed to this project, from the initial concept to its implementation.

## Documentation Links
- **Final Report:** [Hardware Project Final Report - Group 28.pdf](Docs/Hardware%20Project%20Final%20Report%20-%20Group%2028.pdf)
- **Final Presentation:** [Google Slides](https://docs.google.com/presentation/d/1CPPkHnMzfAydRKjZW_XPN3g_7zKz9mP_/edit?usp=sharing&ouid=100717740034882554144&rtpof=true&sd=true&usp=embed_facebook)
