//Expected Time Complexity : O(N)

#include<bits/stdc++.h>
#include<string>
using namespace std;


int compress(vector<char>& chars) {
    // your code goes here
    
    string s;
    int j = chars.size();
    int count = 1;
    int i = 0;
    
     for(i=0;i<chars.size();i++)
     {
         count = 1;
         while((i<chars.size()-1) && (chars[i]==chars[i+1]))
         {
             count++;
             i++;
         }
         s = s + chars[i];
         if(count>1)
         {
             s = s + std::to_string(count);
         }
         
     }
     
     chars.clear();
     
     for(i=0;i<s.length();i++)
     {
         chars.push_back(s[i]);
     }
     
     return chars.size();
     
}
