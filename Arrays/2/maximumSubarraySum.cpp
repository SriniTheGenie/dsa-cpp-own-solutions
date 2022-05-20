/* Kadane's Algorithm */

#include<bits/stdc++.h>
using namespace std;

int maxSumSubarray(vector<int> A) {
    int maxsubarraysum = A[0];
    int cs;
    
    if(A[0] < 0)
    {
        cs = 0;
    }
    else
    {
        cs = A[0];
    }
    
    for(int i=1;i<A.size();i++)
    {
      if(A[i] < 0)
      {
        if((cs+A[i]) < 0)
        {
          cs = 0;
          maxsubarraysum = max(maxsubarraysum, A[i]);
        }
        else
        {
          cs = cs+A[i];
          maxsubarraysum = max(maxsubarraysum, cs);
        }
      }
      else
      {
         cs = cs+A[i];
         maxsubarraysum = max(maxsubarraysum,cs);
      }
      
        
    }
    return maxsubarraysum;
    
}
