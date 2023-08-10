#include <iostream>
using namespace std;
void insertion(int *arry, int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        int min_idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arry[j] < arry[min_idx])
            {
                min_idx = j;
            }
        }
        swap(arry[min_idx], arry[i]);
    }
}
int main()
{
    int arr[]{10, 5, 8, 20, 2, 18};
    int n = 6;
    insertion(arr, n);
    for (auto x : arr)
    {
        cout << x << " ";
    }

    return 0;
}