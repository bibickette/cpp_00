🇫🇷 Version française disponible [ici](README_FR.md)
* * *
# Project presentation - `cpp_00`
## **Description**

This project is an introduction to **C++**.
For this reason, the learning process starts slowly.

In this first set of exercises, we discover the basic syntax of C++, including namespaces, classes, member functions, and several fundamental concepts of object-oriented programming.

* * *

## Languages & Technologies

**Language**
- C++ (C++98 standard)

**Technologies**
- Makefile

* * *
## Exercices Overview

**ex00. Megaphone**

Create a program that takes arguments and prints them back to the terminal in capital letters.
If no arguments are provided the program will print out a default message, also in captial letters.

**ex01. My Awesome PhoneBook**

Simulate a phonebook using a **terminal interactive interface**.

Available commands:
- `ADD` : add a new contact
- `SEARCH` : display a contact
- `EXIT` : clear the contact list and exit the program

The phonebook can store up to **8 contacts**.  
When a 9th contact is added, it replaces the oldest one, and so on.

**ex02. The Job Of Your Dreams**

Three files are provided:
- `tests.cpp`
- `Account.hpp`
- `19920104_091532.log`

The goal is to implement the `Account` class by creating the `Account.cpp` file with all required **static and member functions**.

The implementation must reproduce the exact output of `19920104_091532.log` when running the provided main function in `tests.cpp` (timestamps may differ).

To verify the output, you can compare the two files using the `diff` command.

### Compilation rules

All exercises are compiled using the following flags :
- `-Wall`
- `-Wextra`
- `-Werror`
- `-std=c++98`

* * *
# Using `cpp_00`

## How to use `cpp_00`

*Note : this repository contains only the `cpp_00` module. It is part of the global [cpp_modules](https://github.com/bibickette/cpp_modules) repository, which regroups all C++ modules.*

1. Clone `cpp_00` in a folder first  : `git clone git@github.com:bibickette/cpp_00.git`
2. Move into the repository : `cd cpp_00`
3. Compile the module : `make`; this will compile all exercises contained in the module
4. You can now move into each exercices and run the corresponding executable

* * *
*Project validation date : March 12, 2025*