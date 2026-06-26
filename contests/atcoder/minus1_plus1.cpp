


/*

Problem Statement
You are given a sequence of non-negative integers 
A=(A 
1
​
 ,A 
2
​
 ,…,A 
N
​
 ) of length 
N.

You can perform the following operation on 
A zero or more times:

Choose an integer 
i with 
1≤i≤N−1, decrease 
A 
i
​
  by 
1, and increase 
A 
i+1
​
  by 
1.
Find the minimum number of operations required to make 
A strictly increasing.

It can be proved that the answer is less than 
2 
63
 .

You are given 
T test cases; solve each.

Constraints
1≤T≤3×10 
5
 
1≤N≤2×10 
5
 
0≤A 
i
​
 ≤10 
9
 
The sum of 
N across all test cases is at most 
6×10 
5
 .
All input values are integers.
Input
The input is given from Standard Input in the following format:

T
case 
1
​
 
case 
2
​
 
⋮
case 
T
​
 
The 
i-th 
(1≤i≤T) test case 
case 
i
​
  is given in the following format:

N
A 
1
​
  
A 
2
​
  
… 
A 
N
​
 
Output
Output the answers for the test cases in order, separated by newlines.

Sample Input 1
Copy
4
3
0 1 0
4
4 6 3 5
7
1 2 3 4 5 6 7
10
11 9 1 3 17 19 10 19 17 3
Sample Output 1
Copy
3
5
0
78
Consider the first test case.

By performing the following operations, 
A can be made strictly increasing in three operations:

Choose 
i=1. 
A becomes 
(−1,2,0).
Choose 
i=2. 
A becomes 
(−1,1,1).
Choose 
i=2. 
A becomes 
(−1,0,2).
It is impossible to make 
A strictly increasing in fewer than three operations, so output 
3.

*/