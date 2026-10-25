# Ohm's Law (C)

A beginner-friendly C console program that finds voltage, current or
resistance using Ohm's law. It is part of my Applied Physics assignment on
solving physics problems with a computer program.

## Features
- Menu to choose what to find: voltage, current or resistance
- Takes the two known values from the user
- Shows the answer with its unit
- Shows an error message for zero resistance or zero current
- Handles invalid menu choices

## Formulas
- V = I × R
- I = V / R
- R = V / I

where V is the voltage (V), I is the current (A) and R is the resistance (Ω).

## How to Run
```
gcc ohms_law.c -o ohms_law
./ohms_law
```

## Example
```
Enter your choice: 1
Enter current I (A): 2
Enter resistance R (Ohm): 10

Voltage V = 20.0000 V
```

## Concepts Used
`if / else if` menu, `scanf` / `printf`, arithmetic operators, input checks.
