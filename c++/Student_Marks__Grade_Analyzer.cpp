#include<iostream>
using namespace std;
int main(){
   int student=4;
    int subject=4;
    string Student_name[4];
    string student_Subject_name[4];
    //for studnet name ;
    for(int i=0; i<4;i++)
    {

        cout << "Enter the student name : "<<i+1<<":";
        cin >>Student_name[i];

    }
    //for student sub name ;
    for(int i=0; i<4;i++){
        cout<<"Enter the student_subject_code= "<<i+1<<":";
        cin >>student_Subject_name[i];

    }
return 0;

}