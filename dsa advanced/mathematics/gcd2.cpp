#include<iostream>
using namespace std;
int hcf(int a,int b){
    if(b==0){
        return a;
    }
    else{
        return hcf(b,a%b);
    }
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<hcf(a,b);
    return 0;
}