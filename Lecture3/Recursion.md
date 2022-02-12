## Recursion
https://www.youtube.com/watch?v=mz6tAJMVmfM

- We might describe an implementation of an algorithm as being
particularly "elegant" if it solves a problem in a way that is both
interesting and easy to visualize.

- The technique of **recursion** is a very common way to implement
such an "elegant" solution.

- The definition of a recursive function is one that, as part of its execution,
invokes itself.

### Example:

- The factorial function (n!) is defined over all positive integers.

- n! equals all of the positive integers less thasn or equal to n,
multiplied together ( 5! 5x4x3x2x1)

- Thining in terms of programming, we'll define the mathematical function n!
as fact(n).

```
fact(1) = 1
fact(2) = 2 * 1
fact(3) = 3 * 2 * 1
fact(4) = 4 * 3 * 2 * 1
fact(5) = 5 * 4 * 3 * 2 * 1
...
```

```
fact(1) = 1 // (basecase)
fact(2) = 2 * fact(1)
fact(3) = 3 * fact(2)
fact(4) = 4 * fact(3)
fact(5) = 5 * fact(4)
...
```

fact(n) = n * fact(n-1)

- This forms the basis for a **recursive definition** of the factorial function

- Every recursive function has two cases that could apply, given any input.
	- The base case, which when triggered will terminate the recursive process.
	- The recursive case, which is where the recursion will actually occur.

```
int fact (int n)
	// basecase
{
	if (n == 1) // basecase
	{
		return 1; 
	}
	// recursive case
	else
	{
		return n * fact(n - 1);
	}
}

// shortened:

int fact (int n)
{
	if (n == 1)
		return 1; 
	else
		return n * fact(n - 1);
}

```

--- 

**Recursion**

- In general, but not always, recursive functions replace loops
in non-recursive functions.

```
int fact (int n)
{
	if (n == 1)
		return 1; 
	else
		return n * fact(n - 1);
}
```

solves the same as:

```
int fact2(int n)
{
	int product = 1;
	while (n > 0)
	{
		product *= n;
		n--;
	}
	return product;
}
```

- It's also possible to have more than one base or recursive case,
if the program might recurse or terminate in different ways,
depending on the input being passed in.

- Multiple base cases:
The Fibonacci number sequece is defined as follows.
	- The first element is 0.
	- The second element is 1.
	- The n'th element is the sum of the (n - 1)th and and (n - 2)th elements.


- Multiple recursive cases:
The Collatz conjecture.

- The Collatz conjecture is applied to positive integers and 
speculates that it is always possible to get "back to 1" if you follow these steps:
 - If n is 1, stop. ( basecase)
 - Otherwise, if n is even, repeat this process on n/2.
 - Otherwise, if n is odd, repeat this process on 3n + 1.

 - Write a recursive function collatz(n) that calculates how many
 steps it takes to get to 1 if you start from n and recurse as indicated above.

 -> collatz.c

 ```
 int collatz(int n)
{
	// base case, if n is equal to 1, we return 0, since there are zero steps to get back to one
	if (n == 1)
		return (0);
	// 2 recursive cases
	// even numbers, if we divide by 2 and there is no remainder, it is an even number
	else if ((n % 2) == 0)
		return (1 + collatz(n/2));
	// odd numbers
	else
		return (1 + collatz(3 * n + 1));
}
```

Recursion is a powerful tool.
If you're using loops and iterations it might get hard to write, so consider using recursion instead.