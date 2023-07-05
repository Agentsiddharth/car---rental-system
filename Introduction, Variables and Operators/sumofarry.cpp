#include<iostream>
using namespace std;
int sum(int arry[],int n){
    int count=0;
    for (int i = 0; i < n; i++)
    {
        count+=arry[i];
    }
    return count;
    
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<"the sum of the given arry is :- "<<sum(arr,n);

    
    return 0;
}