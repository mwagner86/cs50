## Pointers

https://www.youtube.com/watch?v=XISnO2YhnsY

- Pointer provide an alternative way to pass data between function.s.
	- Recall that up to this point, we have passed all data **by value**,
	with one exception.
	- When we pass data by value, we only pass a copy of that data.

- If we use pointers instead, we have the power to pass the actual variable itself.
	- That means that a change that is made in one function can impact what happens in a different function.
	- Previously, this wasn't possible.

- Before we dive into what pointers are and how to work with them,
it's worth going back to basics nad have a look at our computer's memory.

### Memory
- Every file on your computer lives on your disk drive, be it a hard disk drive (HDD)
or a solid-state drive (SSD).

- Disk drives are just storage space;
we can't directly work there. 
Manipulation and use of data can only take place in RAM, so we havbe to move data there.

- Memory is basically a huge array of 8-bit wide bytes.
	- 512 MB, 1GB, 2GB, 4GB...

- we work inside or ram, so every time we talk about memory, we talk about RAM not harddisk.


Data Type | Size (in bytes)
--- | --- 
int | 4
char | 1
float | 4
double | 8
long long | 8
string | ???

---

- Back to this idea of memory as a big array of byte-sized cells.

- Recall from our discussion of arrays that they not only are useful for storage of information
but also for so-called **random access**
	- We can access individual elements of the array by indicating which index location we want.

- Similarily, each location in memory has an **address**.

- Endianness 
	- big-endian (BE) or little-endian (LE) - at another time :)

## Pointers
- There's only one critical thing to remember as we start working with pointers:

- **POINTERS ARE JUST ADDRESSES**

- addresses to locations in memory where variables "live"

int k;
k = 5	
int* pK;
pk = &k;

k | 5 |

pk |0x80C74820|

- pk has the information where to find k in memory.
- pk has an arrow in it, at the very tip of it we find the location in memory where k lives

- A pointe, then, is a data item whose
	- *value* is a memory address
	- *type* describes the data located at that memory address

- As such, pointer allow data structures and/or variables to be shared among functions.

- Pointers make a computer environmental more like the real world.
	- in this example a box with the value 5 in it.

- Pointers allow us to pass variables between functions.
Because if we know exactly where in memory to find a variable,
we don't need to make a copy, we just go to that location and work with that variable.

## How pointers work in C
- The simplest pointer avialable to us in C is the NULL pointer.
	- As you might expect, this pointer points to nothing (a fact which can ctually come in handy!)
- When you create a pointer and you don't set its value immediatlely, you should **always** set the value
of the pointer to NULL.
- You can check wheather a pointer is NULL using the equality operatior (==).

- Another easy way to create a pointer is to simply **extract** the address
of an already existing variable. We can do this with the address extraction operator (&).

- If **x** is na it-type variable, then &x is a pointer-to-int whose value is the address of x.
- If **arr** is an array of doubles, then &arr[i] is a pointer-to-double whose value is the address of the i'th element of arr.
	- AN array's name, then, is actually just a pointer to its first element -
	you've been working with pointers all along!

- The main purpose of a pointer is to allow us to modify or inspect the location to which it points.
	- We do this by **dereferencing** the pointer.
	- We go to the reference and we change the value there.

- If we have a pointer-to-char called pc, then *pc is the data that lives at the memory address stored 
inside the variable pc.
	- *pc is how we refer to the data at that location.
	- *pc = D; whatever character was previously there is now D.

- Used in this context, * is know as the **dereference operator**
