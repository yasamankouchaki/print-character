//print the number of input characters
#include <iostream>
using namespace std;
int main() {
    int num;
    char Char;
    cout << "Enter the number & character:";
    cin >> num >> Char;
    for (int i = 0; i < num; i++) {
        cout << Char << " ";
    }

    return 0;
}
