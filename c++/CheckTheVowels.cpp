#include<iostream>
using namespace std;
int main(){
    int x;
    
    cout << "enter the number:  ";
    cin >> x;
    if(x<=1){
        if(x%2==0)
    {
        cout << "This is  not  prime ";
    }
    }else
    {
        cout<<"this is  prime";
    }
   
    
    return 0;
}