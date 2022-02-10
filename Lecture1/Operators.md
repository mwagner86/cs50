# Operators

## Arithmetic Operators
- In order to manipulate and work with variables and values in C,
we have a number of operators at our disposal.

- In C we cann add (+), substract (-), multiply (*) and divide (/) numbers.

int x = y + 1;
x = x * 5;

- We also have the modulus operator, (%) which gives us 
the remainder when the number on the left of the operator is
divided by the number on the right.

int m = 13 % 4; // m is now 1

- C also provides a shorthand way to apply an 
arithmetic operator to a single variable.

x = x * 5;
x *= 5;

- This trick works with all five basic arithmetic operators.
C provides a furter shorthand for incrementing or decrementing a variable by 1:

x++; x = x + 1 , x += 1
x--; x = x - 1 , x -= 1

## Boolean Expressions
- Boolean expressions are used in C for comparing values.
- All Boolean expressions in C evaluate to one of two possible values - true or false.
- We can use the result of evaluating a Boolean expression in other programming constructs,
such as deciding which branch in a *conditional* to take, 
or determining wheather a *loop* should continue to run.

- Sometimes whern working with Boolean expression, we will use variables of 
type bool, but we don't havbe to.
- In C, every nonzero value is equivalent to true, and zero is false
- every value greater or smaller than zero is true;
zero is false
- Two main types of Boolean expressions: 
logical operators and relational operators

## Logical operators
- Logical operators
	- Logical AND (&&) is true if and only if both operands are true,
	otherwise false.

	- Logical OR (||) is true and only if at least one operand is true,
	otherwise false.

	- Logical NOT (!) (BANG, NOT) inverts the value of its operand.

- Relational operators
	- These behave as you would expect them to, and appear
	syntactically similar how you may recall them from elementary arithmetic.

	- Less than (x < y)
	- Less than or equal to (x <= y)
	- Greater than (x > y)
	- Greater than or equal to (x >= y)

- C also test two variables for equality and inequality.
	- Equality (x == y)
	- Inequality ( x != y)

	- CAVE! It's a common mistake to use the assigment operator (=)
	when you intend to use the equality operator (==).