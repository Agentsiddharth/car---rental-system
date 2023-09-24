#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> s;
    for(int i=0;i<5;i++){
        int x;
        cin>>x;
        s.push(x);
    }
    while(s.empty()==false){
        cout<<s.top();
        s.pop();
    }
    
    
    return 0;
}