/* Here in I have not taken into use of the fact or quality of the array being sorted which has lead to somewhat an inefficient solution with O(N^2) Time Complexity */

#include<bits/stdc++.h>
using namespace std;

pair<int , int> closestSum(vector<int> arr, int x){
    // your code goes here
    
    pair<int,int> pair1;
    
    int diff = INT_MAX;
    
    for(int i=0;i<arr.size();i++)
    {
        for(int j=i+1;j<arr.size();j++)
        {
           // if((arr[i]+arr[j])==x)
            //{
                if(diff>abs(arr[i]+arr[j]-x))
                {
                    diff = abs(arr[i]+arr[j]-x);
                    pair1.first = arr[i];
                    pair1.second = arr[j];
                }
                
            //}
        }
        
    }
    
    
    
    return pair1;
}
