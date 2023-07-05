#include<iostream>
using namespace std;

void sort1(int arry[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arry[i] > arry[j])
            {
                int temp = arry[i];
                arry[i] = arry[j];
                arry[j] = temp;
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
        cin >> arry[i];

    sort1(arry, n);

    for (int i = 0; i < n; i++)
        cout << arry[i] << " ";

    return 0;
}