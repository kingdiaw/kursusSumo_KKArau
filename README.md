# Program Pembangunan dan Peningkatan Kemahiran Berteraskan 4IR: Robotic Application di Kolej Komuniti Arau Cawangan Kangar 9-10 September 2024
## Nota Kursus
Nota kursus (google slide) boleh ambil disini [Nota Goole Slide](https://docs.google.com/presentation/d/1PJUw4vBVmcOnj3PTXjwTzOhOILjbxaiIWsUu6iikcxU/edit?usp=sharing)

Nota Tambahan: [Motor Driver](https://www.instructables.com/Tutorial-for-Dual-Channel-DC-Motor-Driver-Board-PW/)

Nota Tambahan: [Arduino Reference](https://www.arduino.cc/reference/en/)

Nota Tambahan: [SUMOBOT ESP32 Controller Board Ver 2022](https://github.com/Husainiaza/polysumo/tree/main)

Nota Tambahan: [Step to Install ESP32 Board in Arduino IDE](https://randomnerdtutorials.com/installing-esp32-arduino-ide-2-0/#more-103687)

## Plug and Play
### Step 1: Pasang set Robot menggikut usermanual
Dapatkan set sumo dari Kolej Komuniti Arau seterusnya buat pemasangan seperti yang usermanual.
### Step 2: Upload full code ke dalam ESP32
Buka FullCodeSumo.ino dan copy code.
Pada Arduino IDE, buka New Sketch dan paste code.
Upload code ke dalam ESP32.
### Step 3: Download dan intall Bluetooth Remote control
Muat turun aplikasi base.apk, dan install pada peranti Android masing-masing.
- Use a QR code scanner app on your smartphone to scan the provided QR code.
<p align="center">
  <img src="images/remoteBT_apk_qr-code.png" alt="QR Code" width="200"/>
</p>

# 500g RC Sumo Robot Competition Rules
## 1. Objective
The objective of the competition is for one remote-controlled robot to push the opposing robot out of the circular ring (Dohyo).

## 2. Robot Specifications
**Weight**: The robot must **not exceed 500 grams**.
**Size**: The robot must fit into a square box with **dimensions 15 cm x 15 cm** at the start of the match. There are **no height restrictions**.
**Mobility**: Robots can move using wheels, tracks, or any other locomotion method, but no flying or jumping is allowed.
**Power Supply**: The robot must be powered by batteries with a **voltage not exceeding 12V**.
**Control**: Robots must be controlled remotely by participants. Any form of wireless remote control is allowed (e.g., RC transmitters, Bluetooth, etc.).

## 3. Arena Specifications
**Dohyo**: The playing field is a circular ring with a diameter of 77 cm. 
**Surface**: The surface of the ring is smooth and flat.

## 4. Match Rules
**Duration**: Each match lasts for a maximum of 3 minutes. If neither robot is pushed out of the ring within this time, the match will be declared a draw.
**Start**: Robots are placed at opposite sides of the Dohyo at the start, facing each other. The match begins on the referee’s signal.
**Winning Condition**: A robot wins a round if:
It successfully pushes the opponent out of the ring.
The opponent falls over or becomes immobilized for more than 10 seconds.
Best of 3: The match is decided in a best-of-three format (the robot that wins two rounds wins the match).

## 5. Prohibited Actions
**Weapons**: No offensive weapons (e.g., saws, flames, or projectiles) are allowed. Robots should use pushing force to win.
**Interference**: Remote control interference from outside participants or external devices is prohibited.
**Hazardous Materials**: The use of materials or designs that intentionally cause damage to the opponent robot, the arena, or spectators is strictly forbidden.

## 6. Robot Behavior
**Restart**: If both robots become immobile, the match will be restarted. After **two restarts**, the match will be declared a draw.
**Fair Play**: Any attempts to deceive the opponent (e.g., hiding sensors, non-visible propulsion) are prohibited.

## 7. Scoring and Points
**Win**: A robot that wins a match (best of 3 rounds) earns **3 points**.
**Draw**: If the match ends in a draw after the full 3 minutes or after two restarts, **each robot will be awarded 1 point**.
**Lose**: A robot that loses the match receives **0 points**.

## 8. Penalties
**Disqualification**: A robot will be disqualified if it violates the weight or size limitations, uses prohibited materials, or engages in unsportsmanlike conduct.
**Warnings**: Referees may issue warnings for minor infractions. **Three warnings result in disqualification**.

## 9. Judging
A panel of referees will oversee the matches and ensure adherence to the rules. Their decisions are final.
