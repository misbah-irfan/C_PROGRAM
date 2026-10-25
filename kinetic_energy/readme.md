# Kinetic Energy Calculator (C)

A beginner-friendly C console program that calculates the kinetic energy of a
moving object from its mass and velocity.

## Features
- Takes mass (in kg) and velocity (in m/s) from the user
- Calculates the kinetic energy in joules
- Accepts decimal values
- Shows an error message if the mass is negative

## Formula
- KE = ½ × m × v²

where KE is the kinetic energy (J), m is the mass (kg) and v is the
velocity (m/s).

## How to Run
```
gcc kinetic_energy.c -o kinetic_energy
./kinetic_energy
```

## Example
```
Enter Mass of any object
2
Enter Velocity of that object
3
The K.E is 9.00 J
```

## Concepts Used
Variables, `scanf` / `printf`, `if` condition, input validation, arithmetic
operators.
