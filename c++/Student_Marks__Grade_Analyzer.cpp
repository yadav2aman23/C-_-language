#include<iostream>
#include<string>

using namespace std;
int main(){
    int stud=4;
    int std_sub=4;
    string stud_name[4];
    string stud_sub[4];
    for(int i=0; i<4;i++){
        cout <<"Enter the stdunet name : " << i+1 <<":";

        cin >> stud_name[i];
    }
    for(int i=0;i<4;i++){
        cout << "Enter the student subject name = "<< i+1 <<":";
        cin >> stud_sub[i];
        
    }

    return 0;

}