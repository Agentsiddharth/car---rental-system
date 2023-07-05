#include <iostream>
#include <algorithm>
using namespace std;
void short1(int arr1[], char arr2[], int n)
{
    pair<int, char> pair1[n];
    for (int i = 0; i < n; i++)
    {
        pair1[i] = {arr1[i], arr2[i]};
    }
    sort(pair1, pair1 + n);
    for (int i = 0; i < n; i++)
    {
        cout << pair1[i].second << " ";
    }
}
int main()
{
    int arr1[]{10, 15, 5};
    char arr2[]{'X', 'Y', 'Z'};
    short1(arr1, arr2, 3);

    return 0;
}