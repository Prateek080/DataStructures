## Searching and Sorting

### Algorithm
Necessary set of instructions for performing a computation.
Input, Output, Definiteness, Correctness, Finite

*Time Complexity* - time used by a computer to solve a problem using the algorithm.<br>
*Space Complexity* - amount of computer memory required to implement the algorithm


#### Searching

*Basic* - To find an item in a set of distinct items.
##### *Types* 
**Linear/ Sequential**<br>
Involves looking at each value and when value is located, the program quits and return 
true.<br>

*Time Complexity* 
> Best - Ω(1); Worst - O(n); Average - θ(n);

**Binary**<br>
Search a sorted array by repeatedly dividing the search interval in half.

*Time Complexity* 
> Best - Ω(1); Worst - O(log N); Average - θ(log N);

#### Sorting
*Basic* - Ordering the elements of a list by any context. Telephone Directory, Song Loader<br>

*Adaptive and Non-Adaptive Sorting Algorithm*<br>
Adaptive if it takes advantage of already sorted elements and vice versa

##### *Types* <br>

**Selection**<br> 
The idea behind selection sort is:

* Find the smallest value in A; put it in A[0].
* Find the second smallest value in A; put it in A[1]. etc.

*Time Complexity* 
> Best - Ω(n^2); Worst - O(n^2); Average - θ(n^2);


**Bubble**<br>
Bubble sort is a simple sorting algorithm.

* This sorting algorithm is comparison-based algorithm in which each pair of adjacent elements is compared and the elements are swapped if they are not in order.

*Time Complexity* 
> Best - Ω(n); Worst - O(n^2); Average - θ(n^2);

**Insertion**<br>
The idea behind insertion sort is:

* Put the first 2 items in proper order.
* Insert the 3rd item in proper place relative to first 2.
* Insert the 4th item in proper place relative to first 3.

*Time Complexity* 
> Best - Ω(n); Worst - O(n^2); Average - θ(n^2);


**Quick** <br>
Choose a pivot value.

* Partition the array (put all value less than the pivot in the left part of the array, then the pivot itself, then all values greater than the pivot).
* Recursively, sort the values less than the pivot.
* Recursively, sort the values greater than the pivot.

*Time Complexity* 
> Best - Ω(nlog(n)); Worst - O(n^2); Average - θ(nlog(n));

**Merge** <br>
To sort an array of length N:

* Divide the array into two halves.
* Recursively, sort the left half.
* Recursively, sort the right half.
* Merge the two sorted halves.

*Time Complexity* 
> Best - Ω(nlog(n)); Worst - O(nlog(n)); Average - θ(nlog(n));