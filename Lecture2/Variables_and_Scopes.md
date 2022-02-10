## Variable Scope

### 1. Scope 
--  is a characteristic of a variable that defines from which function that variable may be accessed

### 2. Local variables 
- can only be accessed within the functions in which they are created
- No other function can refer to that variable, not even main().
- variable is local to that function.

### 3. Global variables
- can be accessed by any function in the program 
- If a variable is declared outside of all functions, any function may refer to it.

### Why does this distinction matter?
- For the most part, local variables in C are **passed by value** in function calls.
- When a variable is passed by value, the **callee** receives a copy of the passed variable,
not the variable itself
- That means the variable in the **caller** is unchanged unless overwritten.


Example:
- No effecet on foo
```
int main(void)
{
	int foo = 4;
	triple(foo);
}

int triple(int x)
{
	return x *= 3;
}

```

- Overwrites foo
```
int main(void)
{
	int foo = 4;
	foo = triple(foo);
}

int triple(int x)
{
	return x *= 3;
}

```

- Things can get particularly insidous if the same variable
name appears in multiple functions, which is perfectly okay 
as long as the variables exist in different scopes.

```
int main(void)
{
	int x = 1;
	int y;
	y = increment(x);
	printf("x is %i, y is %i\n", x, y);
}

int increment(int x)
{
	x++;
	return x;
}

```
Output:
x is 1, y is 2.