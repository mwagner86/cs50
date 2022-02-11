## Lecture 3 Week 4

[Youtube Video](https://www.youtube.com/watch?v=gR6nycuZKlM "Lecture 3 - Algorithms")

## Playlist 2020
https://www.youtube.com/watch?v=YoXxevp1WRQ&list=PLhQjrBD2T382_R182iC2gNZI9HzWFMC_8

# Shorts

## Linear Search
[Youtube Short 1] (https://youtu.be/TwsgCHYmbbA "Linear Search")
## Binary Search
[Youtube Short 2] (https://youtu.be/T98PIp4omUA "Binary Search")
## Bubble Sort
[Youtube Short 3] (https://youtu.be/RT-hUXUWQ2I "Bubble Sort")
## Selection Sort
[Youtube Short 4] (https://youtu.be/3hH8kTHFw2A "Selection Sort")
## Recursion
[Youtube Short 4] (https://youtu.be/mz6tAJMVmfM "Recursion")
## Merge Sort
[Youtube Short 4] (https://youtu.be/Ns7tGNbtvV4 "Merge Sort")

## Notes:

- Rubber duck debugging
	- ddb

- Computers use algorithms

- Seaching
	- search algorithms

input (array) -> | algorithms | -> output

## Running time
- how long it takes
- Number of steps involved

- O - Big O Notation
	- on the Order of, time to solve:
	- O(n)
	- O(n/2)
	- O(log2n)

	- the bases don't really matter in CS

- Common formualas are:
	- O(n²)
	- O(n log n)
	- O(n)
	- O(log n)
	- O(1) ( a constant number of steps,1 ,10, 100 etc.)

- Ω refers to the opposite
	- the lower bound on the running time.
	- Ω(n²)
	- Ω(n log n)
	- Ω(n)
	- Ω(log n)
	- Ω(1) ( a constant number of steps,1 ,10, 100 etc.)

### linear search
- BIG O: O(n)

Pseudo Code:

For I from 0 to n-1
	If number behind i'th door
		return true
Return false

- Upper bound is O(n)
- Lower bound is Ω(1)

### binary search
- BIG O: O(log n)

Pseudo Code:

If no door
	return false
If number behind middle door
	return true
Else if number < middle door
	search left half
Else is number > middle door
	search right half

- Upper bound O(log n)
- Lower bound is Ω(1)

---

strcmp()

man strcmp
checks ASCIIbetically

---

## datastructure struct

```
typedef struct
{
	string name;
	string number;
}
person; // variable name for the new datatye
```
- datastructre in order to keep related data together

## Sorting algorithms

unsorted -> | algorithm | -> sorted

// unsorted array of numbers -> sorted array of numbers
6 3 8 5 2 7 4 1 -> | sort algorithm | -> 1 2 3 4 5 6 7 8

- Concerns of sorting algorithms
	- correctness
	- tradeoff between time / complexity

### selection sort
- BIG O: O(n²)
- Ω(n²)

Pseudo code:
For i from 0 to n-1
	Find smallest item between i'th item and last item
	Swap smallest item with i'th item
	i++

n + (n-1) + (n-2) + ... + 1
n(n+1)/2
(n² +n)/2
n²/2 + n/2

n² is the important value.
BIG O Notation => O(n²)

### bubble sort
- BIG O: O(n²)
- Ω(n)

Pseudo code:
Repeat until sorted
	For i from 0 to n-2
		If i'th and i'th elements out of order
			swap them

Repeat n-1 times
	For i from 0 to n-2
		If i'th and i+1'th elements out of order
			Swap them
		If no swaps
			Quit

(n-1) x (n-1)
n² - 1n - 1n + 1
n² - 2n + 1

n² once again is the important value.


## Recursion

- the ability for a function to call itself

Pseudo code for findig someone in a phonebook:
```
// iterative implementation

Pick up phone book
Open middle of phone book
Look at page
If person is on page
	Call Person
Else if person is earlier in book
	Open to middle of left half of book
	Go back to line 3
Else if person is later in book
	Open to middle of right half of book
	Go back to line 3
Else
	Quit
```
recursion:
You need a basecase
- if there is no more problem to be solved, quit.


Implementation without recursion
```
Pick up phone book
Open middle of phone book
Look at page
If person is on page
	Call Person
Else if person is earlier in book	
	Search left half of book
Else if person is later in book
	Search right half of book
Else
	Quit
```

### merge sort
BIG O: O(n log n)
Ω(n log n)

Pseudo code:
If only one number
	Quit
Else	
	Sort left half of numbers
	Sort right half of numbers
	Merge sorted halves

log n, both Ω and O are log n in merge sort

---

## Θ - Uppercase Theta
- if both Ω and O are the same.

Θ(n²)	selection sort
Θ(n log n)	merge sort
Θ(n)
Θ(log n)
Θ(1)
