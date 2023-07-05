#include <iostream>
#include <vector>
using namespace std;
vector<int> getsmaller(int arry[], int n, int k)
{
    vector<int> res;
    for (int i = 0; i < n; i++)
    {
        if (arry[i] < k)
        {
            res.push_back(arry[i]);
        }
    }
    return res;
}
int main()
{
    int arry[]{10, 5, 30, 40, 20};
    vector<int> result = getsmaller(arry, 5, 20);
    for (int x : result)
    {
        cout << x << " ";
    }

    return 0;
}
