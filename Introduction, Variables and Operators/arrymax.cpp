#include<iostream>
using namespace std;
int max(int arry[],int n){
    int max=0;
    for (int i = 0; i < n; i++)
    {
        if (arry[i]>arry[i+1]){
            max=arry[i];
        }
    }
    return max;
    
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<"the sum of the given arry is :- "<<max(arr,n);

    
    return 0;
}