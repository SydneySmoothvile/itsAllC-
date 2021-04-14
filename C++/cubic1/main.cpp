#include <iostream>

using namespace std;

int counter(int n)
{
    int counte = 0;
    for(int i = 0;i <n ; i++)
    {
        for(int j=0;j<n; j++)
        {
            for (int k=0;k<n;k++)
            {
                counte++;
            }
        }
    }
    return 0;
}
int main()
{
    cout << "Enter the value of:"<<counte << endl;
    //cin>>i;
    return 0;
}

