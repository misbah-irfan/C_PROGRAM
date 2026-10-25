# Coulomb's Law (C)

A beginner-friendly C console program that calculates the force between two
point charges. It is part of my Applied Physics assignment on solving physics
problems with a computer program.

## Features
- Takes two charges and the distance between them
- Calculates the force in newtons
- Tells whether the force is attractive or repulsive
- Accepts decimal and scientific notation values
- Shows an error message if the distance is zero

## Formula
- F = k q1 q2 / r²

where F is the force (N), k = 9×10⁹ N m²/C², q1 and q2 are the charges (C)
and r is the distance (m).

## How to Run
```
gcc coulombs_law.c -o coulombs_law
./coulombs_law
```

## Example
```
Enter charge q1 (Coulomb): 3e-6
Enter charge q2 (Coulomb): -4e-6
Enter distance r (meter): 0.2

Force F = 2.7000e+00 N (attractive)
```

## Concepts Used
`#define` constants, `scanf` / `printf`, `if / else if`, arithmetic operators.
