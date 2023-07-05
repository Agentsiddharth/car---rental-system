#include<iostream>
using namespace std;

int count1(int arry[],int n){
    int count=0;
    for (int i = 0; i < n; i++)
    {
        int j=0;
        for (int j = i-1; j >= 0; j--)
        {
            if (arry[i]==arry[j]){
                break;
            }
            
        }
        if (i==j){
            count++;
        }
        
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

    cout<<count1(arr,n);

    return 0;
}