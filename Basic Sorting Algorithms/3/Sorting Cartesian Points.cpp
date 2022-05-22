//O(NlogN) Time Complexity
#include<bits/stdc++.h>
using namespace std;

vector<pair<int, int>> sortCartesian(vector<pair<int, int>> v)
{
      // your code goes here
    int N = v.size();
    sort(v.begin(),v.end());
    
    return v;
    
}
