#include <iostream>
using namespace std;
void decrement(int arry[], int n)
{
    for (int i = 0; i < n; i++)
    {
        arry[i]-=1;

    }

    for (int i = 0; i < n; i++)
    {
        cout<<arry[i]<<" ";
    }
    
    
    
}
int main()
{
    int n;
    cin >> n;
    int arry[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arry[i];
    }
    decrement(arry,n);

    return 0;
}