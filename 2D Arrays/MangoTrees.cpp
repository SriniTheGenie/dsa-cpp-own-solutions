//Mango tree

//Expected Time Complexity 0(N^2 + 1) ~ O(N^2)
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
