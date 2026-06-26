


/*

Problem Statement
You are given integers 
A,B,X,Y.

A piece is placed on a two-dimensional plane. Initially, the piece is at coordinates 
(0,0).

You can perform the following operation zero or more times:

Let 
(x,y) be the current coordinates of the piece. Move the piece to coordinates 
(x 
′
 ,y 
′
 ) satisfying one of the following conditions:
∣x−x 
′
 ∣=A and 
∣y−y 
′
 ∣=B
∣x−x 
′
 ∣=B and 
∣y−y 
′
 ∣=A
Determine whether it is possible to move the piece to coordinates 
(X,Y), and if so, find the minimum number of operations required.

You are given 
T test cases; solve each.

Constraints
1≤T≤2×10 
5
 
1≤A<B≤10 
6
 
0≤X,Y≤10 
6
 
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

A 
B 
X 
Y
Output
Output the answers for the test cases in order, separated by newlines.

For each test case, if it is possible to move the piece to coordinates 
(X,Y), output the minimum number of operations required; otherwise, output 
−1.

Sample Input 1
Copy
4
1 2 1 0
4 6 3 5
459 2026 0 0
19 2026 523 459459
Sample Output 1
Copy
3
-1
0
2670
Consider the first test case.

By moving the piece from 
(0,0) to 
(1,2), then to 
(−1,1), then to 
(1,0) in order, the piece can be moved to coordinates 
(1,0) in three operations.

It is impossible to move the piece to coordinates 
(1,0) in fewer than three operations, so output 
3 on the first line.



*/