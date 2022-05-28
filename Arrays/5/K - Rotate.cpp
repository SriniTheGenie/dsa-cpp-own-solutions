//Expected Time Complexity: O(n)

#include<bits/stdc++.h>
using namespace std;

vector<int> kRotate(vector<int> a, int k){
    
    while(k>0)
    {
        int temp = a[a.size()-1];
        for(int i=a.size()-2;i>=0;i--)
        {
            a[i+1]=a[i];
        }
        a[0] = temp;
        k--;
    }
    
    return a; 
}
