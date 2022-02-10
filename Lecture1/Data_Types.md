# Data Types

## int
- int
	- The int data type is used for variables that will store integers.
	- Integers always take up 4 bytes of memory (32 bits).
	This means the range of values they can store is necessarily limited to 32 bits worth
	of information.
	- Integer Range -2³’ -> 0 -> 2³’ -1 (to account for 0)

- unsigned int
	- unsigned is a qualifier that can be applied to certain types (including int),
	which effectively doubles the positive range of variables of that type, at the 
	cost of disallowing any negative values.
	
	- Unsigned Integer Range 0 -> 2³² (effecively doubles the positive range)

- there are more qualifiers

## char
- char
	- The char data type is used for variables that will store single characters.
	- Characters always take up 1 byte of memory (8bits).
	This means the range of values they can store is necessarily limited to 8 bits worth of information.
	- Thanks to ASCII, we've developed a mapping of characters like A,B,C,etc... to numeric values in the 
	positive side of this range.
	- Character Range -128 -> 0 -> 127 (to account for 0)

## float
- float
	- The float data type is used for variables that will store floating-point values,
	also known as *real numbers*.
	- Floating points values always take up 4 bytes of memory(32 bits).
	- It's a little complicated to describe the range of float,
	but suffice it to say with 32 bits of precision, some of which might be used for an integer part,
	we are limited in how *precise* we can be.

## double
- double
	- The double data type is used for variables that will store floating-point values,
	also known as real numbers.
	- The difference is that doubles are double precision. They always take up 8 bytes of memory (64bits).
	- WIth an additional 32 bits of precision relative to a float, doubles allow us to be specify much more 
	precise real numbers.

## void
- void
	- Is a typoe, but not a data type.
	- Functions can have a void return type,
	which just means they don't return a value.
	- The parameter list of a function can also be void.
	It simply means the function takes no paramters.
	- For now, think of void more as a placeholder for "nothing".
	It's more complex than that, but for now this is sufficient.

## bool
- bool
	- The bool data type is used for variables that will store
	a Boolean value. More precisely, they are capable only of 
	storing one of two values: true and false.
	- Be sure to #include a appropriate library atop your programs,
	if you wish to use the bool type. (f.e. #include <cs50.h>)

## string
- string
	- The string data type is used for variables that will store 
	a series of characters, which programmers typically call a string.
	- Strings include things such as words, sentences, paragraphs and the like.
	- Be sure to #include <CS50.h> atop your programs if you wish to use the string type.

- Later in the course we'll encounter structures (structs) and types (typedefs)
that afford great flexibility in creating data types you need for your programs.

## Creating a variable
- To bring a variable into existence, you need simply speficy the
data type of the variable and give it a name.

int number;
char letter;

- If you wish to create multiple variablews of the same type,
you specify the type name once, and then list as many variables of that type as you want.

int height, width;
float sqrt2; sqrt3, pi;

- In general, it's good practice to only declare variables when you need them.

## Declaration and assignment compared to initialization
- Using a variable
	- After a variable has been declared, it's no longer necessary to specify that
	variables's type. (In fact, doing so has some unintended consequences!)

int number;		// declaration
number = 17;		// assgnment
char letter;		// declaration
letter = 'H';		// assignment

- If you are simultaneous declaring and setting the value of a variable
(sometimes called initializing), you can consolidate this into one step.

int number = 17;		// initialization
char letter = 'H'		// initialization
