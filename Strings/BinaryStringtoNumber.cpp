
//Expected Time Complexity : O(N)

#include <iostream>
#include <string>
#include<cmath>
using namespace std;
 
int binaryToDecimal(string s)
{
    // your code goes here
    int dec=0;
    int length = s.length()-1;
    for(int i=0;i<s.length();i++)
    {
        dec += (s[i] - 48) * (pow(2,length--));
    }
    return dec;
    
}
