#include<iostream>
using namespace std;
int average(int arry[],int n){
    int count=0;
    for (int i = 0; i < n; i++)
    {
        count+=arry[i];
    }
    return count/n;
    
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<"the sum of the given arry is :- "<<average(arr,n);

    
    return 0;
}