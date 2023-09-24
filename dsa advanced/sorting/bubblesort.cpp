#include <iostream>
#include <algorithm>
using namespace std;
void bubble(int *arry, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arry[j] > arry[j + 1])
            {
                swap(arry[j], arry[j + 1]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arry[i] << " ";
    }
}
int main()
{
    int arry[]{4, 5, 1, 7, 9, 2};
    int n = 6;
    bubble(arry, n);
    return 0;
}