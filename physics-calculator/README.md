# Applied Physics Calculator (C)

A C console program that combines all topics of my Applied Physics assignment
in one menu. The menu repeats until the user chooses 0 to exit.

## Topics
1. Unit Conversion
2. Electric Current
3. Electric Field
4. Coulomb's Law
5. Electric Flux
6. Gauss's Law
7. Voltage / Potential Difference
8. Ohm's Law
9. DC Circuits (Series / Parallel)

## Features
- Menu-driven console application
- Asks for the required values and shows the answer with its unit
- Can be used again and again with different values
- Checks for invalid choices and division by zero

## How to Run
This program uses the math library, so add `-lm`:
```
gcc physics_calculator.c -o physics_calculator -lm
./physics_calculator
```

## Example
```
Enter your choice: 1
Enter conversion choice: 1
Enter value: 2500

2500.0000 m = 2.5000 km
```

## Concepts Used
`switch` menu, `do-while` loop, `math.h`, arrays, `scanf` / `printf`,
`if / else`.
