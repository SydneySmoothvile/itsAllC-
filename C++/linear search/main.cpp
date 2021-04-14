#include <iostream>

using namespace std;

int main()
{
    int arr[10],n,i,num;

    cout<<"enter the number of elements in Array\n";
    cin >>n;

    cout << "Enter " << n << "numbers\n";

    //Read array elements
    for(i=0;i<n;i++)
    {
        cin >>arr[i];
    }
    cout<<"Enter the number to search in the Array\n";
    cin>>num;

    //search num in Array from index 0 to element count
    for(i=0; i<n; i++)
    {
        if(arr[i] == num)
        {
            cout<<"Element found at index" <<i;
            break;
        }
    }
    if(i == n)
    {
        cout<<"Element Not Found\n";
    }
    return 0;
}
