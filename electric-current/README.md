# Electric Current (C)

A beginner-friendly C console program that calculates electric current.
It is part of my Applied Physics assignment on solving physics problems
with a computer program.

## Features
- Takes charge (in coulombs) and time (in seconds) from the user
- Calculates the current in amperes
- Accepts decimal values
- Shows an error message if the time is zero

## Formula
- I = Q / t

where I is current in amperes (A), Q is charge in coulombs (C) and
t is time in seconds (s).

## How to Run
```
gcc electric_current.c -o electric_current
./electric_current
```

## Example
```
Enter charge Q (Coulomb): 10
Enter time t (seconds): 2

Current I = 5.0000 A
```

## Concepts Used
Variables, `scanf` / `printf`, `if / else`, arithmetic operators.
