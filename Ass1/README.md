# Assignment-1

**Team Members**
|   Enrollment No.  |   Name   | GitHub Id |
|   --------------  |   ----   | -------- |
|    IEC2021058  |   Nidhi Bhardwaj | daydreamer15 |
|    IEC2021059  |   Anshul Kumawat | Anshulkumawat | 
|    IEC2021061  |   Keshav Gupta | keshav-35  |
|    IEC2021062  |   Tanmay Garg | Tan-Code-may |

**Group No-**"15"

**Faculty Name-**"Dr. Mohammed Javed"

**Mentor Name-** "Md. Meraz"

---
## Problem Statement
Write a C program to left rotate and right rotate an array.

---
## How to use code
Here, we have mentioned the simplified steps to download and run our code of the rotation algorithm in a local terminal, using Git Bash.

#Download project
```
git clone https://github.com/Tan-Code-may/ITP-2022.git 
```
Project Initialize 
```
cd Desktop
cd Ass1
```
---

Run the code
```
Ass_1(ITP).cpp
```
Output
```
An array that has been right rotated or left rotated a certain number of times.
```
---

**Test case**

Rotation of Array
```
Test Case-1
Input:
Enter size of the array:6

Enter elements of the array-
9 4 8 0 2 1

Enter number of times the array need to be rotated:3

Enter 'r/R' to right rotate the array.
Enter 'l/L' to left rotate the array.
l

Output:
0       2       1       9       4       8


#--------------------------#


Test Case-2
Input:
Enter size of the array:6

Enter elements of the array-
9 4 8 0 2 1

Enter number of times the array need to be rotated:4

Enter 'r/R' to right rotate the array.
Enter 'l/L' to left rotate the array.
r

Output:
8       0       2       1       9       4
```

---

### Theory
To rotate an array ar[] of size 'x', either leftwards or rightwards for 'n' times, we have used the concept of loops and functions. To begin with, we take the input from the user. Our algorithm constitutes a nested loop. The first loop ensures the rotation is carried out as many no. of times as the user wishes to and the second 'nested loop' carries out the process of array rotation by assigning the values to consecutive elements, depending upon the type of rotation. Further, we have applied the algorithm using two methods, namely, the standard method and the functions method. 

### Analysis

**Running time of the algorithm**

We have recorded the time that a system takes to execute the rotation algorithm for different number of array elements and different number of rotations. The data has been recorded in our report as well as our presentation.

---

### References

 https://www.tutorialspoint.com/c-program-for-program-for-array-rotation
 
 https://www.javatpoint.com/c-program-to-right-rotate-the-elements-of-an-array
 
 https://www.codechef.com/ide.
