#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int, string> m;
    m.insert({1, "siddharth"});
    m.insert({2, "harsh"});
    m.insert({3, "jalaj"});
    m.insert({4, "ujjwal"});
    m.erase(3);
    for(auto x:m){
        cout<<x.first<<" ";
    }
    
    return 0;
}