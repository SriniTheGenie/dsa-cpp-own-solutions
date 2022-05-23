#include<bits/stdc++.h>
using namespace std;
int defkin(int W, int H, vector<pair<int, int>> position)
{
    vector<int> x,y;
    int defkin_num = W*H;
    int diff_x = 0, diff_from_width = 0;
    int diff_y = 0, diff_from_height = 0;
    // your code goes here
    for(int i=0;i<position.size();i++)
    {
        x.push_back(position[i].first);
        y.push_back(position[i].second);
    }
    
    sort(x.begin(),x.end());
    sort(y.begin(),y.end());
    
    for(int i=0;i<(x.size()-1);i++)
    {
       diff_x = max(diff_x,x[i+1]-(x[i]+1));
       diff_y = max(diff_y,y[i+1]-(y[i]+1));
    }   
    
    diff_from_width = W - x[x.size()-1];
    diff_from_height = H - y[y.size()-1];
    
    defkin_num = max(diff_from_width,diff_x) * max(diff_from_height,diff_y);
    
    return defkin_num;
}
