🇫🇷 Version française disponible [ici](README_FR.md)
* * *
# Project presentation - `C++ modules`
## **Description**

This repository contains all **C++ modules** from the 42 cursus.

The goal of these modules is to introduce **Object-Oriented Programming**, by progressively covering core concepts such as classes, inheritance, polymorphism, memory management, and templates.

Each module is organized as a **Git submodule**.

* * *

## Languages & Technologies

**Language**
- C++ (C++98 standard)

**Technologies**
- Makefile

* * *
## Modules Overview

| Module |                    Main Concepts                     |
|:------:|:----------------------------------------------------:|
| cpp00  | Namespaces, classes, member functions, std::iostream |
| cpp01  |   Memory allocation, references, pointers, switch    |
| cpp02  |         Operator overloading, canonical form         |
| cpp03  |                     Inheritance                      |
| cpp04  |      Polymorphism, abstract classes, interfaces      |
| cpp05  |                      Exceptions                      |
| cpp06  |      Casts (`static_cast`, `dynamic_cast`, ...)      |
| cpp07  |                      Templates                       |
| cpp08  |             STL containers & algorithms              |
| cpp09  |          Advanced STL & practical use cases          |

### Compilation rules

All modules are compiled using the following flags :
- `-Wall`
- `-Wextra`
- `-Werror`
- `-std=c++98`


* * *
# Using `C++ modules`

## How to use `C++ modules`

*Note : this repository acts as a container for all C++ modules. Since each module is included as a Git submodule, the repository must be cloned with them.*
1. Clone `cpp_modules` in a folder first  : `git clone --recurse-submodules git@github.com:bibickette/cpp_modules.git`
2. Move into the repository and select a module : `cd cpp_modules/cpp_XX`
3. Compile the module : `make`; this will compile all exercises contained in the selected module
4. Refer to the module’s `README.md` for detailed explanations and usage instructions

* * *
*Project validation date : March 12 - April 3, 2025*