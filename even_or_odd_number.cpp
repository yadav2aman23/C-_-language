#include <iostream>
using namespace std;

bool isEven(int n) {
    return n % 2 == 0;
}

// This program checks whether a number is even or odd.
int main() {
    int x;
    cout << "Enter the number: ";
    cin >> x;

    if (isEven(x)) {
        cout << "Even number" << endl;
    } else {
        cout << "Odd number" << endl;
    }

    return 0;
}
