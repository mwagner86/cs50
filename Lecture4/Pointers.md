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

| --- | ---
k | 5 |
pk |0x80C74820|

- pk has the information where to find k in memory.
- pk has an arrow in it, at the very tip of it we find the location in memory where k lives

- A pointer, then, is a data item whose
	- *value* is a memory address
	- *type* describes the data located at that memory address

- As such, pointers allow data structures and/or variables to be shared among functions.

- Pointers make a computer environmental more like the real world.
	- in this example a box with the value 5 in it.

- Pointers allow us to pass variables between functions.
Because if we know exactly where in memory to find a variable,
we don't need to make a copy, we just go to that location and work with that variable.

---

## How pointers work in C
- The simplest pointer avialable to us in C is the NULL pointer.
	- As you might expect, this pointer points to nothing (a fact which can actually come in handy!)
- When you create a pointer and you don't set its value immediatlely, you should **always** set the value
of the pointer to NULL.
- You can check wheather a pointer is NULL using the equality operatior (==).

- Another easy way to create a pointer is to simply **extract** the address
of an already existing variable. We can do this with the address extraction operator (&).

- If **x** is an int-type variable, then &x is a pointer-to-int whose value is the address of x.
- If **arr** is an array of doubles, then &arr[i] is a pointer-to-double whose value is the address of the i'th element of arr.
	- An array's name, then, is actually just a pointer to its first element -
	you've been working with pointers all along!

- The main purpose of a pointer is to allow us to modify or inspect the location to which it points.
	- We do this by **dereferencing** the pointer.
	- We go to the reference and we change the value there.

- If we have a pointer-to-char called pc, then *pc is the data that lives at the memory address stored 
inside the variable pc.
	- *pc is how we refer to the data at that location.
	- *pc = 'D'; whatever character was previously there is now D.

- Used in this context, * is know as the **dereference operator**
- It "goes to the reference" and accesses the data at that memory location,
allowing you to manipulate it at will.
- This is just like visiting your neighbor.
Having their address isn't enough. You need to go to the address and only then can
you interact with them.

-The way to go to the address is to use *, the dereference operator.

If you try to dereference a pointer whose value is NULL (nothing in this context)
you get a **Segmentation fault**

- Surprisingly, this is actually good behavior!
- It defends against accidental dangerous manipulation of unknown pointers.
	- That's why we recommend you to set your pointers to NULL
	immediately if you aren't setting them to ak known, desired value.

	- It's better for your program to crash then to screw up another program or another function, by accidentially messing with 
	a memory location you had no intention to mess with.

---

``` int* p;
// or
	int *p; 
// same thing
```

- The value of p is an address.
- We can dereference p with the * operatior.
- If we do, what we'll find at that location is an int.

- The * is either part of the data type, or used as the dereference operatior.

- One more annoying thing with those *s. They're an important part of both the type name
and the variable name.

```
int* px, py; pz;
// will give you one pointer of int type and int type variables py and pz. Prolly not what you intended.
int* pa, *pb, *pc;
// will give you 3 pointer-to-int.
int *pa, *pb, *pc;
// also 3 pointer-to-int. This'll prevent any confusion that you might get from declaring multiple variables at once on the same line
```

- Bit of a syntactic mess you have to work through. A flaw of the syntax.

---

Data Type | Size (in bytes)
--- | --- 
int | 4
char | 1
float | 4
double | 8
long long | 8
char* | 4 or 8

- there is no data type called string.
- string is an alias for a char*, a pointer to a character.
- 8 bytes on a 64 bit system, 4 bytes on a 32 bit system.