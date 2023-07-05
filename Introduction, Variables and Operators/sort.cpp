#include <iostream>
using namespace std;
void swap1(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void sort1(int arry[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (arry[i] > arry[j])
            {
                swap1(arry[i], arry[j]);
            }
        }
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
    sort1(arry, n);
    for (int i = 0; i < n; i++)
    {
        cout << arry[i];
    }

    return 0;
}