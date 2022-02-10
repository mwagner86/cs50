## Lecture 2 Week 3

[Youtube Video](https://www.youtube.com/watch?v=tI_tIZFyKBw "Lecture 2 - Arrays")

## Playlist 2020
https://www.youtube.com/watch?v=YoXxevp1WRQ&list=PLhQjrBD2T382_R182iC2gNZI9HzWFMC_8

# Shorts

## Functions
[Youtube Short 1] (https://www.youtube.com/watch?v=n1glFqt3g38 "Functions")
## Variables and Scope
[Youtube Short 2] (https://www.youtube.com/watch?v=GiFbdVGjF9I "Variables and Scope")
## Arrays
[Youtube Short 3] (https://www.youtube.com/watch?v=K1yC1xshF40 "Arrays")
## Command Line
[Youtube Short 4] (https://www.youtube.com/watch?v=AI6Ccfno6Pk "Command Line")

## Notes:

a.out - assembly output

clang -o name sourcefile.o
-o = output
-l = link (for linking libraries, f.e.: -lcs50)

## 4 steps of compiling
- preprocessing
	- Header files contain prototypes of function, get read by the preprocessor
- compiling
	- convert it from source code to assembly code
	assembly code is closer to machine code.
- assembling
	- take assembly code and convert it to machine code - binary
- linking
	- links together the machine codes of the necessary files ( source, libraries, etc.)

## Debugging

printf for debugging.
you can use printf to be a lot more verbose about your code.

debug50 - gdb GNU debugger
debugger is a tool to allow you to run your code step by step.

## Memory

bool	1byte
char	1byte
double	8 bytes
float	4 bytes
int	4bytes
long	8 bytes
string	? bytes
...

RAM is volatile

- think of physical memory as a grid


## arrays

- See scores.c for examples.

- Global variables for cleaner code.

## ASCII

- strings are terminated by \0 , NUL character.
so they take up one more byte.

## command-line arguments

check exit.c & argc.c

## cryptographie

plaintext -> | cipher | -> ciphertext
key ->