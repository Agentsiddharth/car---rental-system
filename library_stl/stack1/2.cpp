#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(4);
    s.push(5);
    while(s.empty()==false){
        cout<<s.top()<<endl;
        s.pop();
    }
    
    return 0;
}