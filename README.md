# Mencari Tikus 

A simple, lightweight CLI-based guessing game written in C++. The objective of the game is to find **Cippy the Mouse**, who is hiding in one of nine underground holes. 

## Features

- **Dynamic Hiding Spot**: Cippy's location is randomized on every game run using time-based seeding.
- **Directional Hints**: Receive helpful feedback after every guess, telling you if Cippy is to your left or right.
- **Scoring & Rating**: Earn rating stars based on your guessing efficiency:
  - ⭐⭐⭐ **3 Stars (Score 3.0)**: Found Cippy in 3 or fewer attempts. 
  - ⭐⭐ **2 Stars (Score 2.0)**: Found Cippy in 4 to 5 attempts.
  - ⭐ **1 Star (Score 1.0)**: Found Cippy in 6 to 8 attempts.
- **ASCII Art**: Features a cute ASCII art representation of Cippy when you start the game and when you win within 3 attempts.
- **Cross-Platform UTF-8 Support**: Automatically sets the CMD code page to UTF-8 on Windows environments (`chcp 65001`) to render stars and special symbols properly.

## Game Rules

1. Cippy will choose a random hole from **1 to 9**.
2. You will be prompted to enter your guess.
3. If your guess is lower than Cippy's hole, you will be notified that Cippy is to your **right**.
4. If your guess is higher than Cippy's hole, you will be notified that Cippy is to your **left**.
5. You have a maximum of **8 attempts** to find Cippy. If you fail to find him within 8 attempts, you lose.

## How to Play

### Prerequisites

To compile and run this game, you need a C++ compiler (like `g++`) installed on your system.

### Compilation

Open your terminal or command prompt, navigate to the project directory, and compile the source code:

```bash
g++ -o mencariTikus mencariTikus.cpp
```

### Running the Game

Run the compiled executable:

- **Windows**:
  ```cmd
  mencariTikus.exe
  ```
- **Linux / macOS**:
  ```bash
  ./mencariTikus
  ```

## Gameplay Preview

```text
   +--------------------------+
   |  Hi, aku Cippy si tikus  |
   |  Ayo temukan aku         |
   \  ------------------------+
    V
    _    _    
   ( \__/ )  
    \ oo /   
   _/\__/\  
  (_\_VV_/   

Berada di lubang manakah aku?
[ ]  [ ]  [ ]  [ ]  [ ]  [ ]  [ ]  [ ]  [ ]
 1    2    3    4    5    6    7    8    9 

Masukan tebakanmu: 5
Wkwkwk tebakanmu salah, aku di kanan

Masukan tebakanmu: 7
Selamat kamu menemukanku :)
```

## Technical Details

- **Position Randomization**:
  ```cpp
  srand(time(NULL));
  int tikus = rand() % 9 + 1;
  ```
- **CMD UTF-8 Configuration for Windows**:
  ```cpp
  #ifdef _WIN32
  system("chcp 65001 > nul");
  #endif
  ```

---
*Created as a learning project for Algoritma dan Pemrograman (Alpro).*
