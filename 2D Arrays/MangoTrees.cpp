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
int main()
{
    vector<vector<int>> trees
    {
        {0,1,1,0,0,0},
        {1,0,0,1,1,0},
        {0,1,0,0,0,0},
        {0,1,1,0,0,1},
        {1,0,0,1,1,0},
        {0,1,0,0,0,0}
    };
    
    int Ncom = trees.size();
    vector<vector<int>> M(Ncom,vector<int> (Ncom));
    
    int s1,s2,s3,s4;
    
    int min_s1s2s3s4;
    int rahul_part = 0;
    
    M = create_AM(trees,Ncom);
    

    for(int x=0;x<trees.size();x++)
    {
        for(int y=0;y<trees.size();y++)
        {
            s1 = M[x][y];
            s2 = M[x][Ncom - 1] - M[x][y];
            s3 = M[Ncom - 1][y] - M[x][y];
            s4 = M[Ncom-1][Ncom-1] - (s1+s2+s3);
            
            min_s1s2s3s4 = min(s1,s2);
            min_s1s2s3s4 = min(min_s1s2s3s4, s3);
            min_s1s2s3s4 = min(min_s1s2s3s4,s4);
            
            rahul_part = max(rahul_part, min_s1s2s3s4);
        }
    }
    cout<<endl;
    cout<<"rahul_part = "<<rahul_part<<endl;
    return 0;
}
