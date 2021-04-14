#include <iostream>

using namespace std;

struct employee {
   int empID;
   char name[50];
   int salary;
   char department[50];
};
void readEmployee(){
    struct employee emp[3] ;

   for(int i=0; i<3;i++) {

   cout<<"\t Enter the details of the Employee:"<<endl;

   cout<<"Enter the ID of the Employee:";
   cin>>emp[i].empID;

      cout<<"Enter the Name of the Employee:";
   cin>>emp[i].name;

      cout<<"Enter the Salary of the Employee:";
   cin>>emp[i].salary;

      cout<<"Enter the department of the Employee:";
   cin>>emp[i].department;

      cout<<"Employee ID: "<<emp[i].empID<<endl;
      cout<<"Name: "<<emp[i].name<<endl;
      cout<<"Salary: "<<emp[i].salary<<endl;
      cout<<"Department: "<<emp[i].department<<endl;
      cout<<endl;
   }
}
int main() {
  readEmployee();
   return 0;
}
