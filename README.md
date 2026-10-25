# Unit Conversion (C)

A beginner-friendly C console program that converts common physics units.
It is part of my Applied Physics assignment on solving physics problems
with a computer program.

## Features
- Metre to kilometre and kilometre to metre
- Gram to kilogram and kilogram to gram
- Hour to seconds and seconds to hour
- Accepts decimal values
- Shows an error message for an invalid choice

## Conversion Formulas
- km = m / 1000
- m = km × 1000
- kg = g / 1000
- g = kg × 1000
- s = h × 3600
- h = s / 3600

## How to Run
gcc unit_conversion.c -o unit_conversion
./unit_conversion

## Example
Enter conversion choice: 1
Enter value: 2500
2500.0000 m = 2.5000 km

## Concepts Used
Variables, `scanf` / `printf`, `switch` statement, arithmetic operators.
