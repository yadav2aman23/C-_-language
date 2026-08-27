#include<iostream>
#include<string>

using namespace std;
int main(){
    int stud=4;
    int std_sub=4;
    int marks[4][4];
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
    for(int i=0;i<4;i++){
        cout << "\nEnter the marks "<<stud_name[i]<<"\n";

        for(int j=0;j<4;j++){
            cout<<"Enter the marks in "<<stud_sub[j]<<": ";
            cin >> marks[i][j];
        }

    }


    return 0;

}