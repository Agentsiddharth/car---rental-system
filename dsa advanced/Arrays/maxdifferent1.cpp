#include <bits/stdc++.h>
using namespace std;
void maxdiff(int arr[], int n)
{
    vector<int> v;
    
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            v.push_back(arr[j] - arr[i]);
        }
    }
    sort(v.begin(),v.end());
    cout<<v[v.size()-1];
}
int main()
{
    int arry[]{7,9,5,6,3,2};
    int n = 6;
    maxdiff(arry, n);
    return 0;
}