//Expected Time Complexity: O(n^2)

#include<bits/stdc++.h>
using namespace std;
 
 vector<int> WavePrint(int m, int n, vector<vector<int>> arr)
{
    // your code goes here
    
    int startcol = n - 1;
    int startrow = 0;
    int endrow = m - 1;
    
    int wave = 1; /* 1 - downward, 0 - upward */
    
    vector<int> a;
    
    int count = 0;
    
    while(count < m*n)
    {
        if(wave == 1)
        {
            for(int row = startrow;row <= endrow; row++)
            {
                a.push_back(arr[row][startcol]);
                count++;
            }
            wave = 0;
        }
        else
        {
            for(int row = startrow;row >= endrow; row--)
            {
                a.push_back(arr[row][startcol]);
                count++;
            }  
            wave = 1;
        }
        
        if(startcol != 0)
        {
            startcol--;
        
           int temp = startrow;
           startrow = endrow;
           endrow = temp;
        }
    }
    
    return a;
}




//Mango tree
/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> create_AM(vector<vector<int>> trees,int Ncom)
{
    vector<vector<int>> M(Ncom,vector<int> (Ncom));
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
