#include<iostream>
using namespace std;
int main(){
    int x;
    
    cout << "enter the number:  ";
    cin >> x;
    if(x<1){
        if(x%2==0){
            cout <<"This is not prime number ";

        }
        else{
            cout<<"This is prime number ";

        }
        for(int i=x; i<x;i++){
        cout <<i;
        }
    }
    
    return 0;
}