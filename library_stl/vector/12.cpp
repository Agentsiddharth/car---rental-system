#include <iostream>
#include <vector>
using namespace std;
void fun(vector<int> &v)
{
    v.push_back(10);
    v.push_back(20);
}
int main()
{
    vector<int> v{1, 2, 3, 4, 5};
    fun(v);
    for (int x : v)
    {
        cout << x << " ";
    }
    cout<<endl;
    cout<<v.capacity();

    return 0;
}