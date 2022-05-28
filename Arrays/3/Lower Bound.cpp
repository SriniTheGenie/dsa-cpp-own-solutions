//Expected Time Complexity: O(logN)
//Hint: Binary Search

#include<bits/stdc++.h>
using namespace std;


int lowerBound(vector<int> A, int Val) {
    // your code goes here
   int s=0;
   int e = A.size() - 1;
   int lowerbound = -1;
   
  // if(Val<A[0])
  // {
  //     return -1;
  // }
   
   //else
   {
     while(s<=e)
     {
       int mid = (s+e)/2;
       
       if(A[mid] == Val)
       {
           lowerbound = A[mid];
           return A[mid];
       }
       else if(A[mid] < Val)
       {
           s = mid + 1;
           lowerbound = A[mid];
       }
       else
       {
           e = mid - 1;
       }
          
     } //while
     return lowerbound;
   }
}
