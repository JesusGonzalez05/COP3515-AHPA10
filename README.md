AHPA No. 10 (The Secure Array) Instructions

For this assignment, you will write a program in C that reads three pairs of numbers from user input, updates an array, and prints it out. Please carefully follow these input/output requirements so your code works with the autograder:

You must read exactly three pairs of numbers from the input.
Each pair must be written as <value> <position>. 
The position must be between 1 and 9 (inclusive).
The array has 10 elements.
You must use pointers to access and update each element.
The first element of the array always stores the sum of the other 9 elements.
After updating the values at the given positions, recalculate and update the sum.
At the end, you must print the entire array of 10 integers.
Input Format Example:

Enter value and position (1-9): 100 3
Enter value and position (1-9): 5 9
Enter value and position (1-9): 6 1
Output Format Example:

Array contents: 149 6 3 100 5 6 7 8 9 5
