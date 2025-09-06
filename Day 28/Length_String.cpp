#include <iostream>
using namespace std;

int main(){
    char str[] = "Hello world hi";
    int length = 0;
    // for(char s: str){
    //     length++;
    // }
    // OR
    for (int i = 0; i < str[i] != '\0'; i++){
        length++;
    }
    
    cout << length <<endl;
    return 0;
}