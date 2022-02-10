# Loops

- Loops
	- Loops allow your programs to execute lines of code repeatedly, saving you from needing
	to copy and paste or otherwise repeat lines of code.
	- C provides a few different ways to implement loops in your programs,
	some of which likely look familiar from Scratch.

---

## infinite loop
```
while (true)
{

}
```

- Ctrl + c to kill

- This is what we call an *infinite loop*.
The lines of code between the curly braces will execute repeatedly from top to bottom,
until and unless we break out of it (as with a break; stetement) or
otherwise kill our program.

---

## while loop
```
while (boolean-expression)
{

}
```

- If the boolean-expression evaluates to true, all lines of code
between the curly braces will execute repeatedly, in order from
top-to-bottom, until boolean-expression evaluates to false.

---

## do loop
```
do
{

}
while (boolean expression);
```

- This loop will execute all lines of code between the curly braces once,
and then, if the boolean-expression evaluates to true will go back and repeat that
process until boolean-expression evaluates to false.

---

## for loop
```
for (int i = 0; i < 10; i++)
{

}

// or generally:

for (start; expression; increment)
{

}
```
- Syntactically unattractive, but for loops are used to repeat the body of a loop
a specified number of times, in this example 10.
- The process undertaken in a for loop is:
	- The counter variable(s) (here, i) is set
	- The Boolean expression is checked.
		- If it evaluates to true, the body of the loop executes.
		- If it evaluates to false, the body of the loop does not execute.
	- The counter variable is incremented, and then the 
	Boolean expression is checked again, etc.

## Usecases for loops:

- while
	- Use when you want to loop to repeat an unknown number of times,
	and possibly not at all.
- do-while
	- Use when you want a loop to repeat an unknown number of times,
	but at least once.
- for
	- Use when you want a loop to repeat a discrete number of times,
	though you may not know the number at the moment the program is compiled.
