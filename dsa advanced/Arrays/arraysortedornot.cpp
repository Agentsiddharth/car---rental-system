#include<bits/stdc++.h>
using namespace std;
bool check(int *arry,int n){
    for (int i = 0; i < n-1; i++)
    {
        if(arry[i]>arry[i+1]){
            return false;
        }
    }
    return true;
    
}
int main(){
    int arry[]{10, 31, 33};
    cout<<check(arry,3);

    return 0;
}