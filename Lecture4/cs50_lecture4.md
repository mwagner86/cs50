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

## pointer arithmetic

- char * gives you a pointer variable that points to a character.
- you can run simple mathematic operation on pointers, see address2.c

```
t[i] = s[i];
*(t + 1) = *(s + 1);
```
would be the same: square bracket notation is the same thing as pointer arithmetics

## malloc()
- memory allocation
- allocates memory and gives you the address of the first byte of memory which you can now use

## Difference between NUL (\0) and NULL

- NULL represents a NULL pointer, the absence of an address, a bogus address
technically the address zero.
you use NULL in the context of pointers

- you use \0 in the context of characters

## strcpy()
- string copy

## free()
- when you're done with memory it should be your best practice to free it.
- the opposite of malloc is a function free, which takes as its input,
whatever the output of malloc() was.
- the return value of malloc is the address of the first byte of memory that it has allocated for you.
- it's up to you to remember how many bytes you ask you
- in the case of free, tell free the address that malloc gave you.

- any time you use malloc, you have to use free.


## valgrind
- a program to detect if you're doing anything wrong with memory
- where you touched memory you shouldn't have
- checks for memory leaks, if you forgot to use free()

-Usage:
	- valgrind ./executable

Problem
```
int main(void)
{
	int *x;
	int *y;

	x = malloc(sizeof(int));

	*x = 42; // at that address place 42
	*y = 13; // go to the address in y and put 13 there. This might be a bogus address and odds are program will crash: SEGFAULT

	y = x;

	*y = 13;
}

```
- if you try to dereference an uninitialized variable your program may very well crash!

# Garbage values
 - if you yourself not put a value in memory, you should assume
 there is a "garbage value" - you don't know what there is.
 - over time your computer memory contains remnants of all the variables you ever used in your programs.

 - if you're trying to dereference a garbage value, bad things happen.


 - Global variables are generally initialized to 0.

 Break 1:48 Memory layout

 ## Memory

 - machine code
 - globals
 	-(global varialbes / constants)
 - heap
	- (big chunk of memory that malloc uses)

- stack
	- used by functions
	- dynamic place where memory keeps getting used and reused

---

- heap overflow
- stack overflow

with recursion there is an inherant danger of touching memory you shouldn't.
the risk of a segmentation fault.

- buffer overflow
	- for example, if you allocate an array and go too far past the end of it.
	- use malloc and go further the end of memory that you allocated
	- going beyond the boundary of the array.

- buffer
 	- finite resource, a chunck / an array of memory.

## cs50 lib

- get_char
- get_double
- get_float
- get_int
- get_long
- get_string
...

## scanf
- oldschool function
- not designed to be self defensive

## file I/O
- file input / output