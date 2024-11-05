# Credit Card Verifier

This project is a simple C++ application that allows users to input a credit card number and verifies its validity using the Luhn algorithm. It serves as a practical example of string manipulation, vectors, and validation algorithms in C++.

## Features

- Input of credit card number without spaces.
- Validation of the number using the Luhn algorithm.
- Display of accepted credit card digits.
- Repetition of input until a valid number is provided.

## Luhn Algorithm

The Luhn algorithm is a simple method for validating credit card numbers. It involves the following steps:
1. Reverse the order of the digits in the card.
2. Double the value of every second digit.
3. If the result is greater than 9, subtract 9 from the result.
4. Sum all the digits.
5. The number is valid if the sum is a multiple of 10.

## Requirements

- C++ compiler (g++) installed.
- Operating system that supports C++.
