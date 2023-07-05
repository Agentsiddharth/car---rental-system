#include<iostream>
using namespace std;
void count(int arry[],int n){
    static int odd=0,even=0;
    for (int i = 0; i < n; i++)
    {
        if (arry[i]%2==0){
            even+=1;
        }
        else{
            odd+=1;
        }
    }
    cout<<"odd :-"<<odd<<" even :-"<<even;
    
}
int main(){
    int n;
    cin>>n;
    int arry[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arry[i];
    }
    count(arry,n);
    return 0;
}