#include<iostream>
using namespace std;
int main(){
    int x;
    cout << "enter the number:  ";
    cin >>x;
    if(x%1==0 || x%x==0){
        cout<<"This is prime number :";

    }
    else{
        cout << "It is not prime number :";
    }
    return 0;
}