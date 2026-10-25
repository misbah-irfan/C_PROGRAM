# DC Circuits: Series and Parallel (C)

A beginner-friendly C console program that analyses simple DC resistor
circuits. It is part of my Applied Physics assignment on solving physics
problems with a computer program.

## Features
- Choose a series or a parallel circuit
- Works with 1 to 50 resistors
- Calculates the equivalent resistance (Req)
- Calculates the total current using Ohm's law
- Shows the voltage across each resistor (series) or the current
  through each resistor (parallel)
- Rejects invalid choices and zero or negative resistance values

## Formulas
- Series: Req = R1 + R2 + R3 + ...
- Parallel: 1/Req = 1/R1 + 1/R2 + 1/R3 + ...
- Total current: I = V / Req

## How to Run
gcc dc_circuits.c -o dc_circuits
./dc_circuits

## Example (series)
Enter your choice: 1
Enter number of resistors (1 to 50): 3
Enter R1 (Ohm): 10
Enter R2 (Ohm): 20
Enter R3 (Ohm): 30
Enter supply voltage V (Volt): 12

Equivalent Resistance Req = 60.0000 Ohm
Total Current I = 0.2000 A
Voltage across R1 = 2.0000 V
Voltage across R2 = 4.0000 V
Voltage across R3 = 6.0000 V

## Concepts Used
Arrays, `for` loops, `if / else`, input validation, `scanf` / `printf`.
