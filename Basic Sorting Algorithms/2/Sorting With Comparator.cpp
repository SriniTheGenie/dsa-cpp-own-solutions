#include<bits/stdc++.h>
using namespace std;

/* less<int>() is not required. Normally works in ascending order;
   greater<int>() if given works in descending order 
   For array beginning = a, end = a+n;
   for vector beginning = a.begin(), end = a.end()
   */

vector<int> sortingWithComparator(vector<int> a, bool flag){
    // your code  goes here
   flag==true?sort(a.begin(),a.end(),less<int>()):sort(a.begin(),a.end(),greater<int>());
    
    return a;
}
