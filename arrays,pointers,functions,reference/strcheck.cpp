#include<iostream>
using namespace std;
int check(string s,string x){
    int n=s.length();
    int num=s.find(x);
    if(num==string::npos){
        return -1;

    }
    else {
        return num;
    }

}
int main(){
    string s,find1;
    cout<<"enter string:-";
    getline(cin,s);
    cout<<"enter words to be find:-";
    cin>>find1;
    cout<<check(s,find1);
    return 0;
}