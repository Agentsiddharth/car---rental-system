#include<iostream>
using namespace std;
int main(){
    int a;
    float b;
    double c;
    long long l;
    string d;
    cin>>a>>b>>c>>l>>d;
    cout<<b/c<<"\n";
    cout<<b/a<<"\n";
    cout<<int(l)/a<<"\n";
    cout<<int((l)/a)+l<<"\n";
    return 0;
}