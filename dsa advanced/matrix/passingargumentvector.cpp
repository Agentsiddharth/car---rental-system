#include <iostream>
#include <vector>
using namespace std;
void print(vector<int> arry[], int m)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < arry[i].size(); j++)
        {
            cout << arry[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int m, n;
    cin >> m >> n;
    vector<int> arr[m];
    for (int i = 0; i < m; i++)
    {
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            arr[i].push_back(x);
        }
    }
    print(arr, m);

    return 0;
}