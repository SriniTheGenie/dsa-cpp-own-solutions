#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> makeZeroes(vector<vector<int>> arr){
    // your code goes here
    vector<int> rowv;
    vector<int> colv;
    
    std::vector<int>::iterator it;

    for(int row=0;row<arr.size();row++)
    {
      for(int col=0;col<arr[row].size();col++)
      if(arr[row][col] == 0)
      {
          rowv.push_back(row);
          colv.push_back(col);
      }
    }
    
    for(int i=0;i<arr.size();i++)
    {
       it = find(rowv.begin(),rowv.end(),i);
       
       if(it != rowv.end())
       fill(arr[i].begin(),arr[i].end(),0);
        
    }
    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<arr[i].size();j++)
        {
          it = find(colv.begin(),colv.end(),j);
       
          if(it != colv.end())
          {
              arr[i][j] = 0;
          } 
            
        }
        
    }
    
   return arr;
    
}
