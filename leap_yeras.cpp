#include<iostream>
using namespace std;
int main(){
    int yeras;
    cout<<"Enter the your years: ";
    cin >>yeras;

    if(yeras%4==0){
        if(yeras%100==0){
            if(yeras%400==0){
                cout<< "it is leep yers";
            }
            else{
                cout<<"it is not leep yers";
            }
        }else{
            "it is not leep yers";
        }

    }else
    {
        cout<< "it is not leep yers";
    }
    return 0;
  
    
}