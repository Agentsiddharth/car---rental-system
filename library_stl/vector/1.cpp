#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    // for (int i = 0; i < v.size(); i++)
    // {
    //     // cout<<v[i]<<endl;
    //     cout << v.at(i) << endl;
    // }
    v.erase(2);

    return 0;
}