# Gauss's Law (C)

A beginner-friendly C console program that calculates the total electric flux
through a closed surface from the charge enclosed inside it. It is part of my
Applied Physics assignment on solving physics problems with a computer program.

## Features
- Takes the enclosed charge (in coulombs) from the user
- Calculates the total flux in N m²/C
- Accepts decimal and scientific notation values

## Formula
- Φ = Q / ε₀

where Φ is the total flux (N m²/C), Q is the enclosed charge (C) and
ε₀ = 8.85×10⁻¹² C²/(N m²).

## How to Run
```
gcc gauss_law.c -o gauss_law
./gauss_law
```

## Example
```
Enter enclosed charge Q (Coulomb): 1e-9

Total Flux Phi = 1.1299e+02 N m^2/C
```

## Concepts Used
`#define` constants, `scanf` / `printf`, scientific notation.
