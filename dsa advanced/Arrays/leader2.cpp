#include <bits/stdc++.h>
using namespace std;
void leader(int arry[],int n){
    vector<int> v;
    int cur_leader=arry[n-1];
    v.push_back(arry[n-1]);
    for (int i = n-2; i >=0; i--)
    {
        if(arry[i]>cur_leader){
            cur_leader=arry[i];
            v.push_back(arry[i]);
        }
    }
    reverse(v.begin(),v.end());
    for(auto x:v){
        cout<<x<<" ";
    }
    
}
int main()
{
    int arr[]{7, 10, 4, 3, 6, 5, 2};
    int n = 7;
    leader(arr, n);

    return 0;
}