#include<bits/stdc++.h>
using namespace std;

bool comparePrice(pair<string,int> f1, pair<string,int> f2)
{
    int price1 = f1.second;
    int price2 = f2.second;
    
    return price1 < price2;
}

vector<pair<string,int>> sortFruits(vector<pair<string,int>> v, string S){
    // your code  goes here
    
        if(S == "name")
            sort(v.begin(),v.end());
        else if(S == "price")
            sort(v.begin(),v.end(),comparePrice);
        else
        {
            /* Do Nothing */
        }
              
    
    return v;
    
}
