#include <iostream>
using namespace std;

int add(int x, int y) {
    return x + y;
}

// This program reads two numbers, adds them using a function,
// and prints the result.
int main() {
    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    int result = add(x, y);
    cout << "Sum: " << result << endl;
    return 0;
}