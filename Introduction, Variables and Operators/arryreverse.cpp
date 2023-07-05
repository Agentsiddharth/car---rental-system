#include<iostream>
using namespace std;
void rev(int arry[],int n){
    for (int i = n-1; i >= 0 ; i--)
    {
        cout<<arry[i]<<" ";
    }
    
}
int main(){
    int n;
    cin>>n;
    int arry[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arry[i];
    }
    rev(arry,n);
    return 0;
}