#include<iostream>
#include<string>
using namespace std;
int main()
{
    int student=4;
    int subject=4;
    string studentName[4];

    
    for(int i=0; i<4; i++)
    {
        cout<<"Enter the student name"<< i+1<<":";
        cin >> studentName[i];
    }
}