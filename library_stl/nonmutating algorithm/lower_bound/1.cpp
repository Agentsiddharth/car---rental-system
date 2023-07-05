#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<int> v{10, 20, 20, 20, 30, 40};
    
    auto it = lower_bound(v.begin(), v.end(), 20);
    cout << (*it) << endl;
    cout << (it - v.begin()) << endl;
    auto it2 = lower_bound(v.begin(), v.end(), 25);
    cout<<endl;
    cout << (*it2) << endl;
    cout << (it2 - v.begin()) << endl;
    // if we pass value greater than range of vector then:
    cout<<endl;
    auto it3 = lower_bound(v.begin(), v.end(), 50);
    cout << (*it3) << endl;
    cout << (it3 - v.begin()) << endl;

    return 0;
}