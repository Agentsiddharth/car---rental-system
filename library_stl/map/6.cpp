#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, string> m;
    m.insert({1, "siddharth"});
    m.insert({8, "harsh"});
    m.insert({3, "jalaj"});
    m.insert({9, "ujjwal"});
    auto it=m.lower_bound(5);
    if(it!=m.end()){
        cout<<(*it).first<<endl;
    }
    else{
        cout<<"greater"<<endl;
    }
    
    return 0;
}