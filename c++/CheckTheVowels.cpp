#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter this  number";
    cin >> x;
    if(x<=1){
        cout <<"THis is  not prime number  ";

    }
    else{
        bool prime=true;
        for(int i=2; i<x; i++)
        {
        if(x%i==0)
        {
            prime = false;
            break;

        }
        }
    if(prime)
    cout<<"This ia a prime number ";
    else 
        cout<<"This is not a prime numnber ";

    }
    return 0;
}