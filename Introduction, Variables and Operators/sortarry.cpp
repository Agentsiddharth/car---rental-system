#include<iostream>
using namespace std;
bool check(int arry[],int n){
    for (int i = 1; i < n; i++)
    {
        if(arry[i]<arry[i-1]){
            return false;
        }
        else{

        return true;
        }
    }
    
}

int main(){
    int n,arry[]={},min;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arry[i];
    }
  

    if (check(arry,n)==false){
        cout<<"not sorted";
    }
    else{
        cout<<"sorted";
    }
    
    
    
    return 0;
}