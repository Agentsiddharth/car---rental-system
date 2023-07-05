#include <iostream>
using namespace std;

// function to swap

void swap1(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

// function if arry is not shorted

int short1(int arry[], int n)
{

    for (int i = 1; i <= n; i++)
    {
        if (arry[i] < arry[i - 1])
        {
            swap1(arry[i], arry[i - 1]);
        }
    }
}

// function to check shorting

void shortornot(int arry[], int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (arry[i] < arry[i - 1])
        {
            cout << short1(arry, n);
        }
        else
        {
            cout << 1;
        }
    }
}

int main()
{
    int n;
    cout << "enter number of element in an arry" << endl;
    cin >> n;
    int arry[n];
    cout << "enter arry elements:-" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arry[i];
    }

    shortornot(arry, n);

    return 0;
}