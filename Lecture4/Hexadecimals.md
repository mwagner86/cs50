## Hexadecimals

https://www.youtube.com/watch?v=u_atXp-NF6w

- Most Western cultures use the **decimal system**, aka base-10, to represent numeric data
	-	0	1	2	3	4	5	6	7	8	9 

- As we know, computers use the **binary system**, aka base-2, to represent numberic
(and indeed all data)

	-	0 	1

- As computer scientists, it's useful to be able to express data the same way the computer does.
- The problem, is that trying to parse a huge chain of 0s and 1s can be quite difficult.

- The **hexadecimal system**, aka base-16, is a much more concise way to express the data
on a compter's system.

0	1	2 	3 	4	5	6	7	8	9	a	b	c	d	e	f

or

0	1	2 	3 	4	5	6	7	8	9	A	B	C	D	E	F

---

- Hexadecimal makes this mapping easy because a group of four binary digits (bits) is able has 16
different combinations, and each of those combinations maps to a single hexadecimal digit.

### Chart

**Decimal** | **Binary** | **Hexadecimal**
--- | --- | ---
0 | 0000 | 0x0
1 | 0001 | 0x1
2 | 0010 | 0x2
3 | 0011 | 0x3
4 | 0100 | 0x4
5 | 0101 | 0x5
6 | 0110 | 0x6
7 | 0111 | 0x7
8 | 1000 | 0x8
9 | 1001 | 0x9
10 | 1010 | 0xA
11 | 1011 | 0xB
12 | 1100 | 0xC
13 | 1101 | 0xD
14 | 1110 | 0xE
15 | 1111 | 0xF

- we use the prefix "0x" to distinguish hexadecimals from deciamals or characters.

- Just like binary has place values (1, 2, 4 ,8 ...) and decimal does (1, 10, 100, 1000...),
 so does hexadecimals.

Prefix | Power² | Power¹ | Powerº
--- | --- | --- | ---
no | 256 | 16 | 1
no | 16²	| 16¹ | 16º
 0x | **3** | **9** | **7**

- To convert a binary number to hexadecimal, group four binary digits (bits) together from right to left.
	- Pad the leftmost group with extra 0 bits at the front if necessary.
- Then use the chart or your memory to convert those bits into something a bit more concisive.

01000110101000101011100100111101 = 0x46A2B93D
Digit: | 8th | 7th | 6th | 5th | 4th | 3rd | 2th | 1st
--- | --- | --- | --- | --- | --- | --- | --- | ---
binary:	|	0100 	| 0110	| 1010	| 0010 	| 1011	| 1001	| 0011	| 1101
decimal: |	4	| 6	| 10	| 2	| 11	| 9	| 3	| 13
hexadecimal: |	4	| 6	| A	| 2	| B	| 9	| 3	| D

- Memory addresses in our system are represented as hexadecimals.