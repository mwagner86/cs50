# Arrays
https://www.youtube.com/watch?v=K1yC1xshF40

- data structure
- hold values of the same type at contiguous memory locations

- An array is a block of contiguous space in memory
- which has been partitioned into small, identically sized blocks of
space called **elements**
- each of which can store a certain amout of **data**
- all of the same data type such as **int** or **char**
- and wihch can be accessed directly by an index.

- In C, the elements of an array are indexed starting from 0
 (one of the major reasons we count from zero!)

- if an array consists of n elements, the first element is located at index 0.
The last element is located at index (n-1)

CAVE: C is very lenient. It will not prevent you from going "out of bounds"
Segmentation fault!

## Array declarations

type name[size];

- the type is what kind of variable each element of the array will be.
- the name is what you want to call your array.
- the size is how many elements you would like your array to contain.

f.e:
double menu_prices[8];

- if you tink of a single element of an array of type "data-type" the same as you
would any other variable of type "data-type" (which, effectivly, it s)
then all the familiar operations make sense.

```
bool truthtable[10];

truthtable[2] = false;
if(truthtable[7] == true)
{
	printf("TRUE!\n");
}

truthtable[10] = true;
// Careful, out of bounds!
```

- When declaring and initializing an array simultaneous, there is a special syntax that
may be used to fill up the array with its starting values.

```
// instantiatious syntax
bool truthtable[3] = {false, true, true};

// you don't need to indicate the size beforehand, the compiler will fill it out for you, if you leave it empty.

// individual element syntax
bool truthtable[3];
truthtable[0] = false;
truthtable[1] = true;
truthtable[2] = true;

// both do the same!
```

## Multi dimensional arrays

- Arrays can consist of many more than a single dimension.
You can have as many size specifiers as you wish.

```
bool battleship[10][10];
// 2 dimensional array
```

- You can choose to think of this as either a 10x10 grid of cells.
	- In memory though, it's really just a 100 element one dimensional array.
	- Multi-dimensional arrays are great abstractions to help visualize game boards
	or other complex representations.

## Arrays

- while we can trat individual elements of arrays as variables,
we cannot treat entire arrays themselves as variables.
- We cannot, for instance, assign one array to annother using the 
assignment operator. => That is not legal C.
- Instead, we must use a loop to copy over the elements one at a time.
```
int foo[5] = {1, 2, 3, 4, 5};
int bar[5];

~~bar = foo~~
// wrong syntax

// we need a loop
for(int j = 0; j < 5; j++)
	{
		bar[j] = foo[j];
	}
```

! equals syntax works in more modern programming languages but not in C

- Recall that most variables in C are **passed by value**
in function calls.

- Arrays do not follow this rule. Rather, they are
**passed by reference**. The callee receives the actual array,
**not** a copy of it.
	- What does that mean when the callee manipulates elements of the array?
- For now, we'll gloss over why arrays have this special property, but we'll return to it soon enough!