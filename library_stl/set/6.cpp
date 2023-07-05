#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;
    s.insert(5);
    s.insert(10);
    s.insert(15);
    s.insert(20);
    s.insert(25);
    set<int>::iterator it=s.find(10);
    s.erase(it,s.end());
    for(auto x:s){
        cout<<x<<" ";
    }
    
    return 0;
}