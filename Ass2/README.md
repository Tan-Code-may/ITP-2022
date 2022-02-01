# Assignment-2

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
Write a C program to find difference between decimal numbers by using structures to a function.

---
## How to use code
Here we have mentioned the simplified steps to download and run our code in a local terminal, using Git Bash.

#Download project
```
git clone https://github.com/Tan-Code-may/ITP-2022.git 
```
Project Initialize 
```
cd Desktop
cd Ass2
```
---

Run the code
```
ass_2_1_15.c
ass_2_2_15.c
```
Output
```
Absolute difference between two decimal numbers as many number of times as the user wants.
```
---

**Test case**

Difference of numbers
```
Test Case-1 (ass_2_1_15.c)

Input:
Enter two decimal numbers (upto 4 decimal places)-
23.1598 21.4895

Do you want more (Y/N): y
Enter two decimal numbers (upto 4 decimal places)-
1596.4798 23985.1489

Do you want more (Y/N): d

Do you want more (Y/N): N


Output:
Difference=1.6703
Difference=22388.6680
Wrong input
Finish.
#--------------------------#


Test Case-2 (ass_2_2_15.c)

Input:
Enter number of times the difference has to be carried out: 2

Enter two decimal numbers (upto 4 decimal places)-
1234.5986 2356.7848 

Enter two decimal numbers (upto 4 decimal places)-
325987.2598 1254.4785

Output:
Difference= 1122.1863
Difference= 324732.7813

```

---

### Theory
To rightfully obtain the difference between two decimal numbers for a stipulated number of times, we have used the concept of structures, arrays, and functions. To begin with, we take the required inputs from the user. The further program can be expressed by two approaches, the first one includes the usage of ‘structures’ and ‘functions’, and the second one is an amalgamation of ‘structures with arrays’ and ‘functions’. Either approach would give us the difference between a set of two decimal numbers for a certain number of times, based on the user input. The only difference is that the first program asks the user every time whether they want to run it again or not. On the other hand, the second program initially asks the user about the number of times the difference needs to be obtained, so that the user need not tell the system again and again to get the difference of various sets of two decimal numbers. Also, the output has been curated not to give the difference of the numbers as positive or negative values, rather to give out the absolute values. 

### Analysis

**Time complexity**

Our first program does not involves any loop or recursive statements, hence, time complexity for the standard method is O(1).

Our second program contains a single looping statement, namely, ‘for’ loop, hence, its time complexity will be O(n).

---

### References

 https://fresh2refresh.com/c-programming/c-passing-struct-to-function/
 
 https://www.geeksforgeeks.org/analysis-of-algorithms-set-4-analysis-of-loops/
 
