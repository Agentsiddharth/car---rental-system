#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, int> m;
    m.insert({1, 100});
    m.insert({2, 200});
    m.insert({3, 300});
    m.insert({4, 400});
    for (auto it = m.begin(); it != m.end(); it++)
    {
        cout << (*it).first << " " << (*it).second << endl;
    }
    cout << m.size() << endl;
    m.clear();
    cout << m.size();

    return 0;
}