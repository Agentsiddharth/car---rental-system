#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    int i=1;
    while(i*i<=n){
        i++;
    }
    cout<<i-1;
    return 0;
}