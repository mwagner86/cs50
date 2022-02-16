## Defining Custom Types

https://www.youtube.com/watch?v=crxfzK3Oc9M

- The C keyword **typedef** provides a way to create a shorthand
or rewritten name for data types.

- The basic idea is to first define a type in the normal way, then alias it to something else.


```
// typedef <old name> <new name>;
typedef unsigned char byte;
```

- usually going to be at the top of our .c or in a .h file

- we can just use byte everywhere we would have used unsigned char.

- in cs50 lib we typedef char* string;

```
struct car
{
	int year;
	char model[10];
	char plate [7];
	int odometer;
	double engine_size;
};

typedef struct car car_t;
```

- If I define a car as follows, I have my definiton of a car - struct car.
Then open curly brace, all the fields of my structure, close curly brace ;

- After that I can typedef struct car as car_t.
Now everytime i would have otherwise used struct car, I can now use car_t.


- Alternatively, because structures are so commonly used in typedef,
you can define the type in between the start and the end.
- You can define a structure right in the middle of the typedef.

```
typedef struct car
{
	int year;
	char model[10];
	char plate [7];
	int odometer;
	double engine_size;
} 
car_t;

```

- You're defining the structure and naming it at the same time.
- The new name is car_t

```
// variable declaration
car_t mycar;

// field accessing
mycar.year = 2011;
mycar.plate = "CS50";
mycar.odometer = 50505;
```