#include<iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;
    bool a = true;

    for(int i=0; i<s.size(); i++)
    {
        if(s[i] == ' ')
        {
            a = true;
        }

        if(a)
        {
            if (s[i+1] >= 'a' && s[i+1] <= 'c') cout << 2;
            else if (s[i+1] >= 'd' && s[i+1] <= 'f') cout << 3;
            else if (s[i+1] >= 'g' && s[i+1] <= 'i') cout << 4;
            else if (s[i+1] >= 'j' && s[i+1] <= 'l') cout << 5;
            else if (s[i+1] >= 'm' && s[i+1] <= 'o') cout << 6;
            else if (s[i+1] >= 'p' && s[i+1] <= 's') cout << 7;
            else if (s[i+1] >= 't' && s[i+1] <= 'v') cout << 8;
            else if (s[i+1] >= 'w' && s[i+1] <= 'z') cout << 9;
            a = false;
        }

    }

    return 0;
}

/*

Problem Statement
You are given 
N strings 
S 
1
​
 ,S 
2
​
 ,…,S 
N
​
  consisting of lowercase English letters.

Define 
N digits 
C 
1
​
 ,C 
2
​
 ,…,C 
N
​
  as follows:

If the first character of 
S 
i
​
  is one of a, b, c, then 
C 
i
​
 = 2
If the first character of 
S 
i
​
  is one of d, e, f, then 
C 
i
​
 = 3
If the first character of 
S 
i
​
  is one of g, h, i, then 
C 
i
​
 = 4
If the first character of 
S 
i
​
  is one of j, k, l, then 
C 
i
​
 = 5
If the first character of 
S 
i
​
  is one of m, n, o, then 
C 
i
​
 = 6
If the first character of 
S 
i
​
  is one of p, q, r, s, then 
C 
i
​
 = 7
If the first character of 
S 
i
​
  is one of t, u, v, then 
C 
i
​
 = 8
If the first character of 
S 
i
​
  is one of w, x, y, z, then 
C 
i
​
 = 9
Output the string obtained by concatenating 
C 
1
​
 ,C 
2
​
 ,…,C 
N
​
  in this order.

Constraints
1≤N≤10
N is an integer.
S 
i
​
  is a string of length between 
1 and 
10, inclusive, consisting of lowercase English letters.
Input
The input is given from Standard Input in the following format:

N
S 
1
​
  
S 
2
​
  
… 
S 
N
​
 
Output
Output the string obtained by concatenating 
C 
1
​
 ,C 
2
​
 ,…,C 
N
​
  in this order.

Sample Input 1
Copy
2
algorithm heuristic
Sample Output 1
Copy
24
The first character of 
S 
1
​
 = algorithm is a, so 
C 
1
​
 = 2.
The first character of 
S 
2
​
 = heuristic is h, so 
C 
2
​
 = 4.
Thus, output 24, which is their concatenation.

Sample Input 2
Copy
3
i love you
Sample Output 2
Copy
459


*/