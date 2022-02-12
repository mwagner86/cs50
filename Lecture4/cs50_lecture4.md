## Lecture 4 Week 5

[Youtube Video](https://www.youtube.com/watch?v=NKTfNv2T0FE "Lecture 3 - Memory")

## Playlist 2020
https://www.youtube.com/watch?v=YoXxevp1WRQ&list=PLhQjrBD2T382_R182iC2gNZI9HzWFMC_8

# Shorts

## Hexadecimals
[Youtube Short 1] (https://www.youtube.com/watch?v=u_atXp-NF6w "Hexadecimal")
## Pointers
[Youtube Short 2] (https://www.youtube.com/watch?v=XISnO2YhnsY "Pointers")
## Defining Custom Types
[Youtube Short 3] (https://www.youtube.com/watch?v=crxfzK3Oc9M "Defining Custom Types")
## Dynamic Memory Allocation
[Youtube Short 4] (https://www.youtube.com/watch?v=xa4ugmMDhiE "Dynamic Memory Allocation")
## Call Stacks
[Youtube Short 4] (https://www.youtube.com/watch?v=aCPkszeKRa4 "Call Stacks")
## File Pointers
[Youtube Short 4] (https://www.youtube.com/watch?v=bOF-SpEAYgk "File Pointers")

## Notes:

### Hexadecimal
- Base 16
	- 0 1 2 3 4 5 6 7 8 9 A B C D E F
	- base-16

- 	FF
	- 16 x F + 1 x F
	- 16 x 15 + 1 x 15 = 240 + 15 = 255 in base-10

- 11111111 in binary
	- 255 in base-10

- one hexadecimal digit is equivalent to 4 binary digits.
- convinient

- Hexadecimal is used for RGB color representation
- you prefix them with 0x to make clear they are hexadecimal digits.

Compare with color picker in f.e.: Photoshop.

RGB color range also 255,
fully saturated color is:
- FFFFFF = white
- FF0000 = RED
- 00FF00 = GREEN
- 0000FF = BLUE

Memory location is also represented in hexadecimals.
they are also prefixed with 0x

---

## &
- address of operator

## *
- dereference operator
- look inside particular memory address

## pointer
- a variable that contains the address of another value / data type


int n = 50;

int *p = &n; stores the address of int n

- pointers take up 8bytes of memory

## strings
- it is sufficent to think of a string s of being identically to the address of the first byte
- string is an array of characters, so you need only know the address of the first char in the string

- string s = "HI!";

- HI!\0

- all characters in a string are back to back to back and the end is determined by '\0'

there is no datatype called "string" in c, unless you use a library like <cs50.h>

Break min 44