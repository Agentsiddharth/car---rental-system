#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v{1, 2, 3, 4, 5, 6};
    v.insert(v.begin(), 100);
    for (int x : v)
    {
        cout << x << " ";
    }
    cout<<endl;
    v.insert(v.begin() + 2, 200);
    for (int x : v)
    {
        cout << x << " ";
    }
    cout<<endl;
    v.insert(v.begin(), 2, 300);

    for (int x : v)
    {
        cout << x << " ";
    }
    cout<<endl;
    vector<int> v2;
    v2.insert(v2.begin(),v.begin(),v.begin()+2);
    for (int x : v2)
    {
        cout << x << " ";
    }
    return 0; 
}