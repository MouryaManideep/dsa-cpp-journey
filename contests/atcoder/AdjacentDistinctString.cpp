


/*

Problem Statement
You are given a string 
S consisting of lowercase English letters.

Determine whether it is possible to rearrange the characters of 
S so that no two adjacent characters are the same, and if so, find one such rearrangement.

You are given 
T test cases; solve each.

Constraints
1≤T≤3×10 
5
 
S is a string of length between 
1 and 
10 
6
 , inclusive, consisting of lowercase English letters.
The total length of 
S across all test cases is at most 
10 
6
 .
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

S
Output
Output the answers for the test cases in order, separated by newlines.

For each test case, if it is impossible to rearrange 
S so that no two adjacent characters are the same, output No.

If it is possible, let 
S 
′
  be such a rearrangement and output in the following format:

Yes
S 
′
 
If there are multiple valid rearrangements of 
S, any of them will be accepted.

Sample Input 1
Copy
3
aiiw
doodoo
aabbababcacababaaba
Sample Output 1
Copy
Yes
iwai
No
Yes
ababacabababacababa
Consider the first test case.

iwai is a rearrangement of aiiw in which no two adjacent characters are the same. Thus, outputting iwai is correct.

Other correct outputs include wiai and iawi.

*/