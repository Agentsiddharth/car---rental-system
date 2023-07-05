#include<iostream>
using namespace std;
bool check(int arry[],int n){
    for (int i = 0; i < n; i++)
    {
        if (arry[i]>arry[i+1]){
            return false;
        }
    }
    return true;

}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    if (check(arr,n)==true){
        cout<<"sorted";
    }
    else{
        cout<<"not sorted";
    }
    
    return 0;
}