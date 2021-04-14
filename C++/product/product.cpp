#include <iostream>

using namespace std;

struct Product{
    char name[20];
    int code;
    int price;
};

int main()
{
    Product item;
    //item.price=300;
    int sales;
   // for(int i = 0; i<3; i++){

        cout<<"\t Enter the Item Details: "<<endl;

        cout<<"Enter the name of the Product: ";
        cin>>item.name;

        cout<<"Enter the code of the Product: ";
        cin>>item.code;

        cout<<"Enter the price of the Product: ";
        cin>>item.price;

  //  }
sales=item.price *30;
cout<<"The price of "<<item.name<<" if only 30 are sold is: "<<sales;
return 0;
}
