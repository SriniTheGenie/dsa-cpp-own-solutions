/* Why do we need sorting here?
   Only if we do sorting, if the difference between the nearby elements is !(<=D) we shall not process the element further.
   Whereas if sorting is not done, we will endup questioning an element again and again which is not a correct solution */

#include<bits/stdc++.h>
using namespace std;

int pairSticks(vector<int> length, int D)
{
    // your code goes here
    int n = 0;
    sort(length.begin(),length.end());
    for(int i=0;i<length.size()-1;i++)
    {
        if(length[i+1]-length[i]<=D)
        {
            n++;
            i++;
        }
        
    }
    return n;
}
