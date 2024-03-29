#include <iostream>
using namespace std;

int insert(int arr[], int n, int x, int cap, int pos)
{
    if (n == cap)
        return n;

    int idx = pos;

    for (int i = n - 1; i >= idx; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[idx] = x;

    return n + 1;
}

int main()
{

    int arr[5]{5,10,20}, cap = 5, n = 3;
    cout << "Before Insertion" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    int x = 7, pos = 2;

    n = insert(arr, n, x, cap, pos);

    cout << "After Insertion" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}