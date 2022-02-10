# Command Line Arguments

- So far, all programs have begun pretty much the same way

int main(void)
{ }

- Since we've been collecting user input through inprogram prompts,
we haven't needed to modify this declaration of main().
- If we want the user to provide data to our program before the program starts
running, we need a new form.

- To collect so called **command-line arguments** from the user, declare main as:

int main(int argc, string argv[])
{ }

- These two special arguments enable you to know what data the user provided at the command line
and how much data they provided.

## argc
- conventional names
- argc (argument count)
	- This integer-type variable will store the **number** of command-line arguments the user typed
	when the program was executed.

```
command				argc
./greedy			1
./greedy 1024 cs50		3
```

- the program name itself counts as an argument.

## argv
- argv (argument vector) ~vector = another name for array~
- this array of strings stores, one string per element,
the actual text the user typed at the command-line when the program was executed.
- The first element of argv is always found at argv[0].
- The last element of argv is always found at argv[argc-1]. -> array.

elements are strings, so if you wanna use stored numbers as integers, you need
to do a string to int conversion.

```
./greedy 1024 cs50

argv indices	argv contents
argv[0]		"./greedy"	
argv[1]		"1024
argv[2]		"cs50"
argv[3]		??? 
```

argv[3] => out of bounds