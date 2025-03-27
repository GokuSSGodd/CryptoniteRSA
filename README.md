Project Overview

CryptoniteRSA is a C++ implementation of the RSA cryptosystem. This project provides a hands-on demonstration of RSA encryption and decryption mechanisms using predefined prime numbers to generate public and private keys. Designed to elucidate the cryptographic processes behind RSA, CryptoniteRSA ensures secure communication by effectively demonstrating the encryption and decryption of messages.
Features

    Key Pair Generation: Automatically computes RSA modulus, totient, and both the public and private keys using selected prime numbers.

    Robust Encryption & Decryption: Implements RSA encryption to securely encrypt a plaintext message and RSA decryption to accurately retrieve the original plaintext.

    Efficient Modular Exponentiation: Features both naive and optimized algorithms for modular exponentiation to prevent overflow and improve computational efficiency.

    Educational Output: Displays comprehensive details of all RSA parameters including keys and intermediate calculations, fostering a deeper understanding of the algorithm.

How It Works

    Key Generation: From two given primes, the program calculates necessary RSA parameters like modulus and totient, and derives the public and private keys.

    Encryption: Utilizes the public key to transform plaintext into ciphertext.

    Decryption: Applies the private key to revert ciphertext back to plaintext.

Usage

    Setup: Download the repository and ensure you have a C++ compiler like g++ installed.

    Compilation: Compile the C++ program using your preferred compiler.

    Execution: Run the compiled executable to observe RSA encryption and decryption in action.

Included Files

    CryptoniteRSA.cpp: The main C++ source file implementing the RSA algorithm.

    README.md: Documentation explaining project setup and execution.

Running the Program

g++ -o CryptoniteRSA CryptoniteRSA.cpp
./CryptoniteRSA

Output

The program clearly outputs:

    p, q: The chosen prime numbers.

    n: RSA modulus.

    Φ(n): The totient of the modulus.

    e: Public exponent.

    d: Private exponent.

    M: Original plaintext message.

    C: Encrypted message (ciphertext).

    M': Decrypted message (should match M).

Contributions

Interested in contributing? Fork the project, make your desired changes, and propose a pull request.
License

CryptoniteRSA is distributed under the MIT License. The LICENSE file in the repository contains the licensing details.
