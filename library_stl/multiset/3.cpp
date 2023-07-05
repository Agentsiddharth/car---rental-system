#include<iostream>
#include<set>
using namespace std;
int main(){
    multiset<int> m;
    m.insert(10);
    m.insert(5);
    m.insert(15);
    m.insert(10);
    m.insert(10);
    auto it=m.equal_range(10);
    cout<<*it.first<<" "<<*it.second;
    return 0;
}