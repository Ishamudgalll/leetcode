#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
    set<int> s1; 
    s1.insert(2); 
    s1.insert(5); 
    s1.insert(3); 
    s1.insert(6); 
  
    cout << "Elements in set:\n"; 
    for (auto it : s1) 
        cout << it << " "; // Sorted 
  
    return 0; 
} 
