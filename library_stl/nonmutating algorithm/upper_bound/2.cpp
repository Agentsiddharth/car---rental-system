#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void search1(vector<int> v, int x)
{
    auto it = upper_bound(v.begin(), v.end(), x);
    if ((it != v.begin()) && ((*it - 1) == x))
    {
        cout << "found at: " << it - v.begin() << endl;
    }
    else
    {
        cout << "not found";
        
    }
}
int main()
{
    vector<int> v{10, 20, 20, 30, 20, 40};
    int x;
    cin >> x;
    search1(v, x);

    return 0;
}