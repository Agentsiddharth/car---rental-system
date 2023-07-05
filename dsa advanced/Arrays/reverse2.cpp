#include <bits/stdc++.h>
using namespace std;
void reverse(int *arry, int n)
{

    int low = 0, high = n - 1;
    while (low < high)
    {
        int temp = arry[low];
        arry[low] = arry[high];
        arry[high] = temp;
        low++;
        high--;
    }
}
int main()
{
    int arry[9]{1, 2, 3, 4, 5, 6, 7, 89, 10};
    int n = 9;
    reverse(arry, n);
    for (auto x : arry)
    {
        cout << x << " ";
    }

    return 0;
}