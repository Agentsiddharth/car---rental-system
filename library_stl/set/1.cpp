#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(5);
    s.insert(5);
    for(auto x:s){
        cout<<x<<" ";
    }
    cout<<endl;
    for(auto i=s.begin();i!=s.end();i++){
        cout<<(*i)<<" ";
    }
    

    return 0;
}