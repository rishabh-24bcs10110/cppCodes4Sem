#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class charOfString {
    public:
        void stringFunction(string s) {
            for (int i = 0; i<s.length(); i++) {
                cout << s[i] << endl;
            }
        }
};

int main() {
    charOfString obj;
    string s = "noic";
    obj.stringFunction(s);
}