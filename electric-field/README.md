# Electric Field (C)

A beginner-friendly C console program that calculates the electric field
strength at a distance from a point charge. It is part of my Applied Physics
assignment on solving physics problems with a computer program.

## Features
- Takes charge (in coulombs) and distance (in metres) from the user
- Calculates the field strength in N/C
- Accepts decimal and scientific notation values (for example 2e-6)
- Uses the size of the charge, so a negative charge gives the same strength
- Shows an error message if the distance is zero

## Formula
- E = k q / r²

where E is the electric field (N/C), k = 9×10⁹ N m²/C², q is the charge (C)
and r is the distance (m).

## How to Run
```
gcc electric_field.c -o electric_field
./electric_field
```

## Example
```
Enter charge q (Coulomb): 2e-6
Enter distance r (meter): 0.3

Electric Field E = 2.0000e+05 N/C
```

## Concepts Used
`#define` constants, `scanf` / `printf`, `if / else`, scientific notation.
