#include <iostream>
using namespace std;

void swap2(int arry[], int n)
{
    int temp = 0;
    for (int i = 0; i < n-2; i++)
    {
        temp = arry[i];
        arry[i] = arry[i + 2];
        arry[i + 2] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arry[i] << " ";
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
    swap2(arry, n);
    return 0;
}