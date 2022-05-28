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
