## Linear Search
https://www.youtube.com/watch?v=TwsgCHYmbbA

- Algorithm to find an element in an array
- In linear search, the idea of the algorthm is to iterate
across the array from left to right, searching for a specific element.

**Pseudocode**
```
Repeat, starting at the first element:
	If the first element is what you're looking for (the target), stop.
	Otherwise, move to the next element.
```

- Worst-case scenario:
	- We have to look through the entire array of n elements,
	either because the target element is the last element of the array
	or doesn't exist in the array at all.

- Best-case scenario:
	- The target element is the first element of the array,
	and so we can stop looking immediately after start.

- Linear Search:
	- O(n)
	- Ω(1)

---

## Binary Search
https://www.youtube.com/watch?v=T98PIp4omUA

- Algorithm to find an element in an array
- In binary search, the idea of the algorithm is to divide and conquer,
reducing the search area by half each time, trying to find a target number.
	- In order to leverage this power however, our array must first be sorted,
	else we cannot make assumptions about the array's contents.

**Pseudocode**
```
 Repeat until the (sub)array is of size 0:
	Calculate the middle point of the current (sub)array.
	If the target is at the middle, stop.
	Otherwise, if the target is less than what's at the middle, repeat,
	changing the end point to be just to the left of the middle.
	Otherwise, if the target is greater than what's at the middle,
	repeat, changing the start point to be just to the right of the middle.
```

- Worst-case scenario
	- We have to divide a list of n elements in half
	repeatedly to find the target element, either because the target
	element will be found at the end of the last division or doesn't
	exist in the array at all.

- Best-case scenario
	- The target element is at the midpoint of the full array, and so we
	can stop looking immediately after we start.

- Binary Search:
	- O(log n)
	- Ω(1)

Binary Search is a lot faster than linear Search, but you have the array sorted in order to use Binary Search.