## Selection Sort
https://www.youtube.com/watch?v=3hH8kTHFw2A

- In selection sort, the idea of the algorithm is to find the smalles unsorted
element and add it to the end of the sorted list.

**Pseudocode**
```
Repeat until no unsorted elements remain:
	Search the unsorted part of the data to find the smallest value
	Swap the smallest found value with the first element of the unsorted part
```

- Worst-case scenario:
	- We have to iterate over each of the n elements of the array
	(to find the smallest unsorted element) and we must repeat this process
	n times, since only one element gets sorted each pass.

- Best-case scenario:
	- Exactly the same! There is no way to guarantee the array is sorted
	until we go through this process for all the elements.

-Selection sort:
	- O(n²) - You have to iterate across all of the n elements n times!
	- Ω(n²) - same

---

## Bubble Sort
https://www.youtube.com/watch?v=RT-hUXUWQ2I

- In bubble sort, the idea of the algorithm is to move higher valued
elements generally towards the right and lower value elements generally
towards the left.

**Pseudocode**
```
Set swap counter to a non-zero value
Repeat until the swap counter is 0:
	Reset swap counter to 0
	Look at each adjacent pair
		If tow adjacent elements are not in order, swap them
		and add one to the swap counter
```

- Worst-case scenario:
	- The array is in reverse order, we have to "bubble"
	each of the n elements all the way across the array, 
	and since we can only fully bubble one element into position
	per pass, we must do this n times.

- Best-case scenario:
	- The array is already perfectly sorted, and we make
	no swaps on the fist pass.

- Bubble Sort:
	- O(n²) - You have to iterate across all of the n elements n times!
	- Ω(n) - If perfectly sorted you have to look across each element once.

---

## Merge Sort

- In merge sort, the idea of the algorithm is to sort smaller arrays
and then combine those arrays together ( merge them ) in sorted order.
- Merge sort leverages something called **recursion**

**Pseudocode:**
```
Sort the left half of the array (assuming n > 1)
Sort the right half of the array (assuming n > 1)
Merge the two halves together
```

- Worst-case scenario:
	- We have to split n elements up and then recombine them,
	effectively doubling tthe sorted subarrays as we build them up.
	(combining sorted 1-element arrays into 2-element arrays, combining sorted 2-element arrays
	into 4-element arrays... etc.)

- Best-case scenario:
	- The array is already perfectly sorted.
	But we still have to split and recombine it back together with this algorithm, so same amount
	of steps is required.

- Merge Sort:
	- O(n log n) - faster than n²
	- Ω(n log n) - the same

- Merge sort in generally is faster, but might take up more memory, since there are more instances of the function running at the same time => recursion.