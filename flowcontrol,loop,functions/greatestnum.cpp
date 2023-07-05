#include <iostream>
using namespace std;
void max(int arry[], int n)
{
    int max1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arry[i] > max1)
        {
            max1 = arry[i];
        }
    }
    cout << "the greatest number is:-";
    cout << max1;
}

int main()
{
    int n;
    cout << "enter number of element:-";
    cin >> n;
    int arry[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arry[i];
    }

    max(arry, n);

    return 0;
}