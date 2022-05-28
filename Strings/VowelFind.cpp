//Expected Time Complexity : O(N)

#include<bits/stdc++.h>
using namespace std;

string vowel(string S){
    // your code goes here
    string onlyvowel;
    
    for(int i=0;i<S.length();i++)
    {
        if((S[i] == 'a') or (S[i] == 'e') or (S[i] == 'i') or (S[i] == 'o') or (S[i] == 'u'))
        onlyvowel += S[i];
    }
    return onlyvowel;
} 
