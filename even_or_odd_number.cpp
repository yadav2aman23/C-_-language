#include<iostream>
using namespace std;

bool iseven(int n){
    return n % 2 ==0;
}

int main(){
    int x;
    cout << "enter the number = ";
    cin >> x;

    if (iseven(x)){
        cout << "Even no";
    }
    else{
        cout << "Odd  number ";
    }

    return 0;
    4
}
