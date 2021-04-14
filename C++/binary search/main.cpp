#include <iostream>

using namespace std;

int search(int arr[],int n,int x)
{
    int start,end,mid,pos;
    start=0;
    end=n-1;

    while(start <= end)
    {
        mid =(start + end)/2;
        if (arr[mid] == x)
        {
            cout<<"Print Found\n";
            pos = mid;
            return pos;
            break;
        }
        else if (arr[mid] < x)
        {
            start = mid +1;
        }
        else if(arr[mid] > x)
            end=mid-1;
    }
    return -1;
}
int main()
{
    int arr[10],n,i,bin,x;
    cout <<"How many elements do you want\n";
    cin>>n;
    cout<<"Enter the number of elements in ascending order\n";

    for(i=0;i<n;++i)
    {
        cin>>arr[i];
    }
    cout<<"\nEnter element to search:";
    cin>>x;

     bin =  search( arr, n, x);

    if(bin != -1)
        cout<<"\nElement found at position"<< bin+1 <<endl;
        //break;
    else
        cout<<"\nElement is not found...!!";

    return 0;
}
