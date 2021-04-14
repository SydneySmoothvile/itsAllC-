#include <iostream>

using namespace std;

int main()
{
    int val[10];
    for(int i =0; i<10; i++)
    {
        cout << "Enter value"<<i +1 <<" : ";
        cin>>val[i];
    }

    return 0;
}

//this is linear time not cubic
