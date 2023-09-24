#include <iostream>
using namespace std;
int lomuto(int *arry, int low, int high)
{
    int pivot = arry[high];
    int i = low - 1;
    for (int j = low; j < high; j++)
    {
        if (arry[j] < pivot)
        {
            i++;
            swap(arry[i], arry[j]);
        }
    }

    swap(arry[i + 1], arry[high]);
    return (i + 1);
}
void quicksort(int *arr, int low, int high)
{
    if (low < high)
    {
        int p = lomuto(arr, low, high);
        quicksort(arr, low, p - 1);
        quicksort(arr, p + 1, high);
    }
}
int main()
{
    int arry[]{8, 7, 2, 1, 0, 9, 6};
    int n = 7;
    for (auto x : arry)
    {
        cout << x << " ";
    }
    cout << endl;
    quicksort(arry, 0, n);
    for (auto x : arry)
    {
        cout << x << " ";
    }

    return 0;
}