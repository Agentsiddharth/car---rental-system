#include<iostream>
using namespace std;
void search(int arry[],int n,int targ){
    
    for (int i = 0; i < n; i++)
    {
        if(arry[i]==targ){
            cout<<i;
        }
        
    }
    
    
}
int main(){
    int n,target;
    cin>>n>>target;
    int arry[n];
    for(int &x:arry){
        cin>>x;
    }
    search(arry,n,target);
    return 0;
}