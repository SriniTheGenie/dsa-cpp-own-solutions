#include<bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>>& matrix) {
      // your code goes here
      
      int i,j;
      
      for(i=0;i<matrix.size();i++)
      {
          for(j=0;j<matrix.size();j++)
          {
              if((i!=j) && (i<j))
              {
                  swap(matrix[i][j],matrix[j][i]);
                  
              }
                  
          }
      }
      
      for(i=0;i<matrix.size();i++)
      {
          reverse(matrix[i].begin(),matrix[i].end());
      }
}
