#include<iostream>
using namespace std;




int main(){
    int x;
    int n;
    cout<<"enter number of element:-"<<endl;
    cin>>n;
    cout<<"enter element"<<endl;
    cin>>x;
    
    int arry[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arry[i];
    }
    

    return 0;
}