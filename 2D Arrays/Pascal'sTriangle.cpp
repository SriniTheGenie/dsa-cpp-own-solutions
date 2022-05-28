/* ncr/(ncr-1)  = (n-r+1)/r */

/* Reference: https://www.tutorialcup.com/leetcode-solutions/pascals-triangle-ii-leetcode-solution.htm */

/* Time Complexity: O(N^2) */

#include<bits/stdc++.h>
using namespace std;



vector<vector<int>> printPascal(int n)
{
    // your code goes here
    
    int line, i;
    vector<vector<int>> res;
    for(line=0;line<n;line++)
    {
        vector<int> v;
        for(i=0;i<=line;i++)
        {
            if((line == i) || (i == 0) )
                v.push_back(1);
            else
            {
               int ncr1 = (int)(((long long)v.back()*(line - i + 1))/i);
               v.push_back(ncr1);
            }
        }
        
        res.push_back(v);
    }
    return res;
}
