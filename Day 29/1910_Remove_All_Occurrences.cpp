#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;

string occurence(string str, string part){
    string s = str;
    while ((s.find(part) < s.length()) && (s.length() > 0)){
        s = s.erase(s.find(part),part.length());
    }
    return s;
}

int main(){
    string str = "daabcbaabcbc";
    string part = "fe";

    cout << occurence(str,part) << endl;
    
    // cout << isPalindrome(str) <<endl;
    return 0; 
}