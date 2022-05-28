
//Expected Time Complexity: O(N)

/* for ( range_declaration : range_expression ) 
    loop_statement

Parameters :
range_declaration : 
a declaration of a named variable, whose type is the 
type of the element of the sequence represented by 
range_expression, or a reference to that type.
Often uses the auto specifier for automatic type 
deduction.

range_expression : 
any expression that represents a suitable sequence 
or a braced-init-list.

loop_statement : 
any statement, typically a compound statement, which
is the body of the loop. */



#include<bits/stdc++.h>
using namespace std;

int largestElement(vector<int> arr) {
  
  int largest_element = arr[0];
  for (int i=1; i<arr.size(); i++)
  largest_element = max(largest_element,arr[i]);
  
  return largest_element;   
}
