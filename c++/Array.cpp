#include<iostream>
using namespace std;
int main(){
    int num[]={10,20,-96,-10,40,88}
    int size=6;
    int smallest=INT_MAX;
    for(int i=0; i<size; i++)    {
        if(num[i]<smallest){
            smallest=num[i];

        }
    }
    cout<<"smallest ="<<smallest<<endl;
    return 0;
}