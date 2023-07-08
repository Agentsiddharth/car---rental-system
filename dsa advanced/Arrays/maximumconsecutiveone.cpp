#include <bits/stdc++.h>
using namespace std;
void consecutive(int *arry, int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = i + 1; j < n; j++)
        {
            if(arry[j]==1){
                count++;
            }
            else{
                break;
            }

        }
        res=max(res,count);
    }
    cout<<res;
}
int main()
{
    int arry[]{1, 0, 1, 1, 1, 1, 0, 1, 1};
    int n = 9;
    consecutive(arry, n);
    return 0;
}