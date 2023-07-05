#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;
void short1(int arry1[], int arry2[], int n)
{
    pair<int, int> p1[n];
    for (int i = 0; i < n; i++)
    {
        p1[i] = {arry2[i], arry1[i]};
    }
    sort(p1, p1 + 4);
    for (int i = 0; i < n; i++)
    {
        cout << p1[i].second << endl;
    }
}
int main()
{
    int arry1[]{101, 108, 103, 105};
    int arry2[]{70, 80, 40, 90};
    short1(arry1, arry2, 4);

    return 0;
}