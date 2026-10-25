# Voltage / Potential Difference (C)

A beginner-friendly C console program that calculates voltage from the work
done and the charge moved. It is part of my Applied Physics assignment on
solving physics problems with a computer program.

## Features
- Takes work done (in joules) and charge (in coulombs) from the user
- Calculates the voltage in volts
- Accepts decimal values
- Shows an error message if the charge is zero

## Formula
- V = W / q

where V is the voltage (V), W is the work done (J) and q is the charge (C).

## How to Run
```
gcc voltage.c -o voltage
./voltage
```

## Example
```
Enter work done W (Joule): 50
Enter charge q (Coulomb): 5

Voltage V = 10.0000 V
```

## Concepts Used
Variables, `scanf` / `printf`, `if / else`, arithmetic operators.
