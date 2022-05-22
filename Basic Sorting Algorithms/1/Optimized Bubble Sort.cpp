/* Best Case Time Complexity is O(N), worst case is O(N^2) */

#include<bits/stdc++.h>
using namespace std;

vector<int> optimizedBubbleSort(vector<int> v){
    // your code  goes here
    int sorted = 1;
    int n=v.size();
     for(int times=1;times<=n-1;times++)
     {
         for(int j=0;j<=n-1-times;j++)
         {
             if(v[j]>v[j+1])
             {
                 swap(v[j],v[j+1]);
                 sorted = 0;
             }
         }
         if(sorted)
         return v;
     }
    return v;
}
