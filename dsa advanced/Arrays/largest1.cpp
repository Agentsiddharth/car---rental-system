#include <bits/stdc++.h>
using namespace std;
int largest1(vector<int> v)
{
    int large = v[0];
    for (auto i = v.begin() + 1; i < v.end(); i++)
    {
        if ((*i) > large)
        {
            large = (*i);
        }
    }
    return large;
}
int main()
{
    vector<int> v{1, 5, 7, 6, 9, 4, 2, 3};
    int n = v.size();
    cout << largest1(v);

    return 0;
}