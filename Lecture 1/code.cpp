// Including a preprocessor
#include <iostream>

// many external file may contain `cout` to print something so
// to not make any confusion between files we have to put this code
using namespace std;

// this is the main function from where every code starts
int main(){
    // cout << "Hello world" used to print something
    // it shows after printing Hello world it is the end of the line
    cout << "Hello world" << endl;

    // `\n` is used to put text after it to the next line
    cout << "Hello world\nShaurya Srivastava" <<endl;

    // another way of writing multiline output
    cout << "Shaurya" << " Srivastava" << endl;

    // Ending of execution
    return 0;
}
