# Electric Flux (C)

A beginner-friendly C console program that calculates the electric flux
through a surface. It is part of my Applied Physics assignment on solving
physics problems with a computer program.

## Features
- Takes electric field, area and angle (in degrees) from the user
- Converts the angle to radians before using cos()
- Calculates the flux in N m²/C
- Treats tiny rounding errors (for example at 90°) as zero

## Formula
- Φ = E A cos θ

where Φ is the electric flux (N m²/C), E is the electric field (N/C),
A is the area (m²) and θ is the angle between the field and the normal.

## How to Run
This program uses the math library, so add `-lm`:
```
gcc electric_flux.c -o electric_flux -lm
./electric_flux
```

## Example
```
Enter electric field E (N/C): 500
Enter area A (m^2): 0.2
Enter angle theta (degrees): 60

Electric Flux Phi = 50.0000 N m^2/C
```

## Concepts Used
`math.h` (`cos`, `fabs`), degree to radian conversion, `scanf` / `printf`.
