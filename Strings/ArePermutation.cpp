//Expected Time Complexity= O(N log N)
//Hint: Permuatations are just different arrangements of same alphabets. Can you make the arrangement same?

#include <bits/stdc++.h>
using namespace std;
 
bool arePermutation(string A, string B)
{
    // your code goes here
    if(A.length() != B.length())
        return false;
    else
    {
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        
        if( A == B)
          return true;
        else
          return false;
    }
}
