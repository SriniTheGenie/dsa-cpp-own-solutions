//Expected Time Complexity O(N log N)

#include<bits/stdc++.h>
using namespace std;

//sqrt((x2-x1)^2 + (y2-y1)^2)
bool comparedistanceformula(pair<int,int> v1, pair<int,int> v2)
{
    float x = sqrt((v1.first * v1.first)+(v1.second * v1.second));
    float x = sqrt((v2.first * v2.first)+(v2.second * v2.second));
    
    return x < y;
}

vector<pair<int,int>> sortCabs(vector<pair<int,int>> v){
    // your code  goes here
    
      sort(v.begin(),v.end(),comparedistanceformula);
     
      
      return v;
    
}
