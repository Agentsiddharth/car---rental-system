#include <iostream>
#include <algorithm>
using namespace std;

void secondlarge(int arry[], int n)
{
    sort(arry, arry + n);
    cout<<(arry[n-2]);
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
    secondlarge(arry,n);
    

    return 0;
}