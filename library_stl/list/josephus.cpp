#include <iostream>
#include <list>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    list<int> l;
    for (int i = 0; i < n; i++)
    {
        l.push_back(i);
    }
    list<int>::iterator it = l.begin();
    while (l.size() != 1)
    {
        for (int j = 0; j < n; j+=k)
        {
            // it++;
            if (it == l.end())
            {
                it = l.begin();
            }
            it=l.erase(it);
        }
    }
    for(auto x:l){
        cout<<x;
    }

    return 0;
}