## Call Stacks

https://www.youtube.com/watch?v=aCPkszeKRa4

- When you call a function, the system sets aside space in memory
for that function to do its necessary work.
	- We frequently call such chunks of memory **stack frames** or **function frames**

- More than one function's stack frame may exist in memory at a given time.
If main() calls move(), which then calls direction(), all three functions have open frames.
	- Only one of those functions is ever running at a given time.

- These frames are arranged in a **stack**. The frame for the most recently called
function is always on the top of the stack.
- When a new function is called, a new frame is **pushed** onto the top of the stack
and becomes the active frame.
- When a function finishes its work, its fram is **popped** off of the stack, and the 
frame immediately below it becomes the new, active function on top of the stack.
This function picks up immediately where it left off.

- This is why recursion works, because all these frames are running, but only one of them is moving at a given time.


```
//recursive implementation of a factorial function
int fact(int n)
{
	if (n == 1)
		return 1;
	else
		return n * fact(n-1);
}

int main(void)
{
	printf("%i\”, fact(5));
}
```

- At the very beginning, right when factorial of 1 is called,
there are seven funciton frames in the call stack.
Factorial of 2, 3, 4, 5, printf() and main are all on pause at the lines that you see there.
They are waiting to become the new active frame again.
- When a function returns a value, that frame is done. It gets popped back off the call stack.