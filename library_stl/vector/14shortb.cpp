#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>
using namespace std;
void shortarry(int *marks, int *rollno, int n)
{
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        v.push_back({rollno[i], marks[i]});
    }
    sort(v.begin(), v.end());
    for (auto i = 0; i < n; i++)
    {
        cout << v[i].second << " " << v[i].first << endl;
    }
}

int main()
{
    int marks[]{101, 108, 103, 105};
    int rollno[]{70, 80, 40, 90};
    
    shortarry(marks,rollno,4);

    return 0;
}