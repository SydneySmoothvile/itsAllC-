#include <iostream>

using namespace std;

struct Student{
    char name[50];
    char email[50];
    int marks[5];
    int age;
};
int main()
{

    Student stud[3];

    for(int i=0 ; i < 3; i++)
    {
    cout << "\t Please Enter the student details"<<i+1<<" : "<<endl ;

    cout << "Please Enter the student name : " ;
    cin>>stud[i].name;

    cout << "Please Enter the student email : " ;
    cin>>stud[i].email;

    cout << "Please Enter the student age : " ;
    cin>>stud[i].age;

    cout<<"Please enter the marks for the student : "<<endl;
    for(int j=0; j< 5; j++)
    {
        cout<<"Marks for subject"<<j+1<< ":";
        cin>>stud[i].marks[j];
    }

    }

    cout<<"The details of the student are : "<<endl;

    cout<<stud[0].name<<endl;
    cout<<stud[0].email<<endl;
    cout<<stud[0].age<<endl;
    cout<<stud[0].marks[0]<<endl;



    return 0;
}
