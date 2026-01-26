// Reversing a String and an Array Using Stack

#include <iostream> 
#include <stack> 
using namespace std; 
 
int main() { 
    string str = "Rishabh Paudel"; 
    stack<char> s; 
 
    for (char c : str) 
        s.push(c); 
 
    for (int i = 0; i < str.length(); i++) { 
        str[i] = s.top(); 
        s.pop(); 
    }  
    cout << str; 
    return 0;
} 