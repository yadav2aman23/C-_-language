#include<iostream>
using namespace std;
int main(){
    int x;
    cout << "enter the number:  ";
    cin >>x;
    if(x<=1){
        if(x%x!=0)
    {
        cout << "This is prime ";
    }
    }else
    {
        cout<<"this is not prime";
    }
   
    
    return 0;
}