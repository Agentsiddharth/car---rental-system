#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,int> m;
    m.insert({1,100});
    m[2]=200;
    m.insert({3,300});
    m.insert({3,3000});
    for(auto x:m){
        cout<<x.first<<" "<<x.second<<endl;
    }
    
    return 0;
}