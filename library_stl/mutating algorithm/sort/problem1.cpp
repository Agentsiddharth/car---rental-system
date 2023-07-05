#include <iostream>
#include <algorithm>
using namespace std;
void thief(int *arry, int k)
{
    int res = 0;
    sort(arry, arry + 6, greater<int>());
    for (int i = 0; i < k; i++)
    {
        res += arry[i];
    }
    cout << res;
}
int main()
{
    int arry[]{3, 7, 2, 5, 12, 30};
    int k = 3;
    thief(arry, k);

    return 0;
}