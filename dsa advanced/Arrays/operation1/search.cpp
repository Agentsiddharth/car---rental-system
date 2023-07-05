#include <bits/stdc++.h>
using namespace std;
void search1(int arry[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        if (arry[i] == target)
        {
            cout << "found at: " << i << endl;
            break;
        }
    }
}
int main()
{
    int arry[]{1, 5, 4, 6, 78, 9, 10};
    search1(arry, 7, 6);

    return 0;
}