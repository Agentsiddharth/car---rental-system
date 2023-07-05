#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> s;
    s.insert(5);
    s.insert(10);
    s.insert(9);
    s.insert(7);
    for(auto i=s.begin();i!=s.end();i++){
        cout<<(*i)<<" ";
    }
    cout<<endl;
    s.clear();
    cout<<s.size();
    for(auto i=s.begin();i!=s.end();i++){
        cout<<(*i)<<" ";
    }
    

    return 0;
}