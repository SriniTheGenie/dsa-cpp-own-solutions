#include<bits/stdc++.h>
using namespace std;

int largestElement(vector<int> arr) {
  
  int largest_element = arr[0];
  for (int i=1; i<arr.size(); i++)
  largest_element = max(largest_element,arr[i]);
  
  return largest_element;   
}
