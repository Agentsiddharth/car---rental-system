#include<iostream>
using namespace std;
int count(int arry[],int n){
    int num=0;
    for (int i = 0; i < n; i++)
    {
        if (arry[i]==0){
            num+=1;
        }
    }
    return num;
    
}
int main(){
    int n;
    cin>>n;
    int arry[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arry[i];
    }
    
    cout<<count(arry,n);
    
    return 0;
}


