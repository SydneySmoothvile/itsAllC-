#include <iostream>

using namespace std;

struct Customer{
    int tag;
    char name[50];
    char email[50];
    int age;
};
int main()
{
    Customer cust;

    cout << "Please Enter the customer tag : " ;
    cin>>cust.tag;

    cout << "Please Enter the customer name : " ;
    cin>>cust.name;

    cout << "Please Enter the customer email : " ;
    cin>>cust.email;

    cout << "Please Enter the customer age : " ;
    cin>>cust.age;

    cout<<"The details of the customer are : "<<endl;
    cout<<cust.tag<<endl;
    cout<<cust.name<<endl;
    cout<<cust.email<<endl;
    cout<<cust.age<<endl;

    return 0;
}
