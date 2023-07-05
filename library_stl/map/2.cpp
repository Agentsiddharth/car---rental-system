#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, int> m;
    m.insert({1, 200});
    cout << m.size() << endl;
    cout << m[2] << endl;
    cout<<m.at(2)<<endl;
    cout << m.size() << endl;

    return 0;
}