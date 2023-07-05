#include<iostream>
using namespace std;
void print(string s,int start,int end){
    string n=s.substr(start,end+1);
    cout<<n;
}
int main(){
    string s;
    int x,y;
    getline(cin,s);
    cin>>x>>y;
    print(s,x,y);
    return 0;
}