#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;

int main(){
    string s = "amanaplanacanalpanama";
    string str = "A man, a plan, a canal: Panama";
    string palindrome;
    for (unsigned char ch : str) {
        if (isalnum(ch)) {
            palindrome.push_back(tolower(ch));
        }
    }
    reverse(palindrome.begin(),palindrome.end());
    cout << palindrome <<endl;
    cout << s << endl;
    cout << (palindrome == s)<<endl;
    return 0; 
}