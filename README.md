# Language-C-pactice
Some mini projects I completed during a C programming class.

# 1. Factorial Calculator in C
URL = https://github.com/douae2506/Language-C-pactice/blob/main/Factorielle.c

## Overview
This project is a simple **C program** that calculates the factorial of a number entered by the user.  
It was developed as part of a **C programming class mini-project** to practice basic programming concepts such as loops, conditions, and user input.

## Features
- Accepts an integer input from the user
- Validates that the number is non-negative
- Computes the factorial using a loop
- Displays the result in the terminal

## Concepts Used
This project demonstrates the following C programming concepts:

- Variables and data types
- Conditional statements (`if`)
- Loops (`for`)
- User input with `scanf`
- Output with `printf`

## Example

Input:
5
Output:
120


---


# 2. Max - Find the Maximum of Two Numbers
URL = https://github.com/douae2506/Language-C-pactice/blob/main/max.c
 
## Description
 
A simple C program that takes two integers as input from the user and prints the larger (maximum) of the two using a custom `max()` function.
 
This is **Exercise 2, TP4**.
 
---
 
## Files
 
| File | Description |
|------|-------------|
| `max.c` | Main source file containing the `max()` function and entry point |
 
---
 
## How It Works
 
1. The program prompts the user to enter two integers, `a` and `b`.
2. It passes both values to the `max()` function.
3. The `max()` function compares the two values and returns the greater one.
4. The result is printed to the console.
 
### Function Signature
 
```c
int max(int a, int b);
```
 
- **Parameters**: Two integers `a` and `b`
- **Returns**: The larger of the two integers
 
---
### Example
 
```
Entrer a,b: 5
Entere b: 12
Max is : 12
```

## Learning Purpose
This project was created to practice fundamental programming concepts and improve problem-solving skills in **C programming**.


---

# 3. Number Guessing Game
URL = https://github.com/douae2506/Language-C-pactice/blob/main/jeu.c
 
A simple terminal-based number guessing game written in C. The player tries to guess a secret number, receiving hints after each attempt until they get it right.
 
---
 
## 📖 How It Works
 
The program picks a fixed target number. The player is repeatedly prompted to enter a guess, and after each attempt the game tells them whether their guess was **too small**, **too big**, or correct. The loop continues until the player guesses the exact number.
 
---
 
## Getting Started
 
### Prerequisites
 
- A C compiler (e.g. `gcc`)
 
### Compile
 
```bash
gcc jeu.c -o jeu
```
 
### Run
 
```bash
./jeu
```
 
---
 
## Gameplay Example
 
```
Guess the number: 10
Too Small
Guess the number: 40
Too big
Guess the number: 25
Bingo!! You Got it
```
 
---
 
## Project Structure
 
```
.
└── jeu.c   # Main source file
```
 
---
 
## Configuration
 
The target number is defined as a macro at the top of `jeu.c`:
 
```c
#define b 25
```
 
Change the value of `b` to set a different secret number before compiling.
 
---
 
## Built With
 
- **C** — Standard C (C99 compatible)
- **stdio.h** — For `printf` and `scanf`

---

# 4. Array Addition Program in C
URL = https://github.com/douae2506/Language-C-pactice/blob/main/Array%20Addition%20Program%20in%20C.c

## Description
This C program allows the user to enter two arrays of integers and creates a third array containing the result of adding the corresponding elements of the first two arrays.

If the arrays are not the same size, the program continues copying the remaining elements from the larger array into the third array.

## Features
- User inputs the size of two arrays
- User fills the arrays with integer values
- The program adds corresponding elements
- The result is stored in a third array
- Handles arrays of different sizes

## How It Works
1. The user enters the size of the first array `n1`.
2. The user enters the size of the second array `n2`.
3. The program asks the user to fill both arrays.
4. A third array `T3` is created.
5. The program:
   - Adds elements with the same index
   - Copies remaining elements from the larger array if sizes are different.
6. The result array is printed.

Example:

T1 = [1,2,3]  
T2 = [4,5,6]

Output:

T3 = [5,7,9]

## 💻 Technologies Used
- Language: C
- Concepts: Arrays, Loops, User Input, Conditional Statements

##  Author
Created by **Douae**
 
---
 
## License
 
This project is open source and free to use for learning purposes.
