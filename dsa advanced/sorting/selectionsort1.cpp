#include <iostream>
#include<limits>
using namespace std;
void insertion(int *arry, int n)
{
    int temp[n];
    for (int i = 0; i < n; i++)
    {
        int min_idx = 0;
        for (int j = 1; j < n; j++)
        {
            if (arry[min_idx] > arry[j])
            {
                min_idx = j;
            }
        }
        temp[i] = arry[min_idx];
        arry[min_idx]=MAX_PATH;
    }
    for (int i = 0; i < n; i++)
    {
        arry[i] = temp[i];
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