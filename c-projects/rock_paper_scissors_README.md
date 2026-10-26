# Rock Paper Scissors Tournament

## About the Project
Rock Paper Scissors Tournament is a console-based game written in C. The player competes against the computer, which chooses a move randomly. The project includes a regular game mode and a tournament mode with three opponents: Rookie, Master, and Champion.

## Features
- Main menu with Start, Instructions, Exit, and Tournament options
- Random computer moves using `rand()` and `srand()`
- Rock, Paper, and Scissors gameplay
- Win, loss, and draw counters in regular mode
- Tournament progression through Rookie, Master, and Champion
- Console messages and emoji-based game display

## C Concepts Used
- Variables and data types
- `if` conditions
- `switch` statements
- `do-while` loops
- Random number generation with `stdlib.h`
- Time-based random seed with `time.h`
- Input and output with `stdio.h`

## How to Run
Compile the source file with a C compiler that supports UTF-8 source text, then run the generated program. For example, with GCC:

```bash
gcc rock_paper_scissors.c -o rock_paper_scissors
./rock_paper_scissors
```

## Project Purpose
This project was created to practise core C programming concepts by building an interactive game. It also provides experience with menu-driven programs, repeated gameplay, score tracking, and tournament-style progression.

## Note
This README describes the current project design. Test the menu paths and tournament rounds in your compiler before presenting the project.
