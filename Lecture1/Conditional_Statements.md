# Conditional Statements

- Conditionals
	- Conditional expressions allw your programs to make decisions
	and take different forks in the road, 
	depending on the values of variables or user input.

	- C provides a few different ways to implement
	conditional expressions ( also known as branches) in your programs,
	some of which likely look familiar from Scratch.
---

if (*boolean-expression*)
{

}

- if the *boolean expression* evaluates to true,
all lines of code between the curly braces will execute in order from
top to bottom

- if the *boolean expression* evaluates to false,
those lines of code will not execute.

---

if (*boolean-expression*)
{

}
else
{

}

- if the *boolean-expression* evaluates to true, all lines of code
between the first set of curly braces {} will execute in order from
top-to-bottom.

- if the *boolean-expression* evaluates to false, all lines of code
between the second set of curly braces {} will execute in order from
top-to-bottom.

---

if (*boolean-expression*)
{
	// first branch
}
else if (*boolean-expression2*)
{
	// second branch
}
else if (*boolean-expression3*)
{
	// third branch
}
else (*boolean-expression4*)
{
	// fourth branch
}

- In C, it is possible to create an if-else if-else chain.
	- As you would expect, each branch is mutually exclusive.

---

- It is also possible to create a chain of non-mutually exclusive branches.

if (*boolean-expression*)
{
	// first branch
}
if (*boolean-expression2*)
{
	// second branch
}
if (*boolean-expression3*)
{
	// third branch
}
else (*boolean-expression4*)
{
	// fourth branch
}

- In this example, only the third and fourth branches are
mutually exclusive.
The else binds to the nearest *if* only.

---
## switch

- C's switch() statement is a conditional statement
that permits enumeration of discrete cases, instead 
of relying on Boolean expressions.

```
int x = GetInt();
switch(x)
{
	case 1:
		printf("One!\n");
		break;
	case 2:
		printf("Two!\n")
		break;
	case 3:
		printf("Three!\n");
		break;
	default:
		printf("Sorry!\n");
}
```

- It's important to break;
between each case, or you will "fall through"
each case (unless that is desired behavior).

```
int x = GetInt();
switch(x)
{
	case 5:
		printf("Five!\n");
	case 4:
		printf("Four!\n")
	case 3:
		printf("Three!\n");
	case 2:
		printf("Two!\n");
	case 1:
		printf("One!\n");
	default:
		printf("Blast-off!\n");
}
```

## ternary operator (?:)

```
int x;
if (expr)
{
	x = 5;
}
else
{
	x = 6;
}
```

same as

```
int x = (expr) ? 5 : 6;
```

- These two snippets of code act identically.
- The ternary operator (?:) is mostly a cute trick,
but is useful for writing trivially short conditional branches.
Be familiar with it, but know that you won't need to write it if you don't want to.

---
Summary:

if (and if-else and if-else etc)
-- Use Boolean expressions to make decisions

switch
-- Use discrete cases to make decisions.

?:
-- Use to replace a very simple if-else to make your code look fancy. (LOL)