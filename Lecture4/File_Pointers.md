## File Pointers

https://www.youtube.com/watch?v=bOF-SpEAYgk

- The ability to read data from and write data to files is the
primary means of storing **persistent** data. Data that does not
disappear when your program stops running.

- The abstraction of files that C provides is implemented in a data
structure known as a FILE.
	- Almost universially when working with files, we will be using pointers to them,
	FILE*.

The file manipulation all live in <stdio.h>
	- All of them accept FILE* as one of their parameters, except for the function
	fopen(), which is used to get a file pointer in the first place.

- Some of the most common file input/output (I/O) functions that we'll be working with are:

1. fopen()
2. fclose()
3. fgetc()
4. fputc()
5. fread()
6. fwrite()

### 1. fopen()
- Opens a file and returns a file pointer to it.
- Always check the return value to make sure you don't get back NULL.

- FILE* ptr = fopen(<filename>, <operation>);
Examples:
- FILE* ptr1 = fopen("file1.txt", "r")
	-r for read.
- FILE* ptr1 = fopen("file1.txt", "w")
	-w for write.
- FILE* ptr1 = fopen("file1.txt", "a")
	-a for append.

### 2. fclose()
- Closes the file pointed to by the given file pointer.

- fclose (<file pointer>);

Example:
- fclose(ptr1);

### 3. fgetc()
- file get character
- Reads and returns the next character from the file pointed to.
- Note: The operation of the file pointer passed in as a paramter must be "r" for read,
or you will suffer an error

- char ch = fgetc(<file pointer>);

Example:
char ch =fgetc(ptr1);

- That's going to give us the first/next character of whatever file is pointed to by ptr1 and store it in the variable ch.

---

- The ability to get single characters from files, if wrapped in a loop, means we could read all 
 the characters from a file and print them to the screen, one-by-one, essentially

 ```
 char ch;
 while ((ch = fgetc(ptr)) != EOF)
	printf("%c", ch)

// this loop will read a character, compare it to EOF, the end-of-file character.
// If they don't match, we have not reached the EOF, we print that character out.
// Go back to the beginning of the loop and repeat the loop until EOF is reached.
```
- We might put this in a file called cat.c, after the Linux command "cat" which essentially
does just this.

---

### 4. fputc()
- Writes or appends the specified character to the pointed-to file.
- Note: The operation of the file pointer passed in as a parameter must be "w" for write
or "a" for append, or you will suffer an error.

- fputc(<character>, <file pointer>);

Example:
- fputc('A', ptr2);
	- is going to write the letter A into file2.txt, which was the name of the file that we opened and assigned the pointer to ptr2
- fputc('!', ptr3);
	- write an ! to file3.txt which was pointed to by ptr3.

---

- Now we can read characters from files and write characters to them.
Let's extend our previous example to copy one file to another, instead of printing to the screen

```
char ch;
while ((ch = fget(ptr)) != EOF)
	fputc(ch, ptr2);
// loop: reading from one file, writing to another, until we reach EOF.
```
- We might put this in a file called cp.c, after the Linux command "cp" which essentially does just this.

### 5. fread()
- Reads <qty> units of size <size> from the file pointed to and stores them in memory
in a buffer (usually an array) pointed to by <buffer>.
- Note: The operation of the file pointer passed in as a parameter must be "r" for read,
or you will suffer an error.

- fread(<buffer>, <size>, <qty>, <file pointer>);

Example:
- int arr[10];
- fread (arr, sizeof(int), 10, ptr);
	- we are now reading 40 bytes of information from the file,
	and we are storing it in arr.
	- We are passing in a pointer, since we pass in arr, which is a pointer.

- We don't need to necessarily save our buffer on the stack, we can also dynamically allocate it on the heap.
- It's still a buffer. In this example we want to be able to hold 80 doubles. So 80x8 = 640 bytes of information.

Example:
- double *arr2 = malloc (sizeof(double) * 80);
- fread (arr2, sizeof(double), 80, ptr);

- We can also treat fread() just like a call to fgetc().

- char c;
- fread(&c, sizeof(char), 1, ptr )
	- when we jsut have a variable, we need to pass in the address (&) of that variable
	- the first argument to fread() is a pointer to the location and memory where we want to store the information.
	- the char c is just a variable.

### 6. fwrite()
- Writes <qty> units of size <size> to the file pointed to by reading them from a buffer
(usually an array) pointed to by <buffer>.
Note: The operation of the file pointer passed in as a parameter must be "w" for write or 
"a" for append, or oyu will suffer an error.

- fwrite (<buffer>, <size>, <qty>, <file pointer>);

Example:
- int arr[10];
- fwrite (arr, sizeof(int), 10, ptr);
	- instead of being from the file to the buffer, we're now going from the buffer to the file
	- reverse of fread()

- double *arr2 = malloc (sizeof(double) * 80);
- fwrite (arr2, sizeof(double), 80, ptr);

- char c;
- fwrite(&c, sizeof(char), 1, ptr )

--- 
- Lots of other useful functions about stdio.h for you to work with.
- Some examples

| Function | Description
| --- | ---
| fgets() | Reads a full string from a file.
| fputs() | Writes a full string to a file.
| fprintf() | Writes a formatted string to a file.
| fseek() | Allows you rewind or fast-forward within a file.
| ftell() | Tells you at what (byte) position you are at within a file.
| feof() | Tells you wheather you've read to the end of a file.
| ferror() | Indicates wheather an error has occured in working with a file.
