//Hint: Pre Compute Cumilative Sums of every index i,j.

//Expected Time Complexity:
// Pre Computing : O(N^2)
// Queries: O(1)

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> create_AM(vector<vector<int>> trees,int row,int col);
int sum(vector<vector<int>> v, int sr, int sc, int er, int ec){
    // your code goes here
    int submatrixsum;
    
    v = create_AM(v,v.size(),v[0].size());
    
    submatrixsum = v[er][ec];
    // if both sr and sc are zero submatrix sum is directly returned
    
    if(sr > 0)
        submatrixsum -=v[sr-1][ec];
    
    if(sc > 0)
        submatrixsum -=v[er][sc-1];
    
    if(sr > 0 && sc > 0)
        submatrixsum +=v[sr-1][sc-1];    
        
    return submatrixsum;
    
}

vector<vector<int>> create_AM(vector<vector<int>> trees,int row,int col)
{
    vector<vector<int>> M(row,vector<int>(col));
    int x,y;
    

    for(x=0;x<trees.size();x++)
    {
        for(y=0;y<trees[0].size();y++)
        {
            if(x == 0 and y == 0)
                M[x][y]= trees[x][y];
            
            else if(x == 0 and y != 0) 
                M[x][y] = trees[x][y] + M[x][y-1];
            
            else if(x != 0 and y == 0)
                M[x][y] = trees[x][y] + M[x-1][y];
            else
                M[x][y] = trees[x][y]+M[x-1][y]+M[x][y-1]-M[x-1][y-1];
        }
    }
    return M;
}
