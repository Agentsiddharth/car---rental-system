#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]{1,2,3,4,5};
    int n=5;
    int temp=arr[0];
    for(int i=0;i<n;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
    for(auto x:arr){
        cout<<x<<" ";
    }

    return 0;
}