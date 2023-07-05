#include <iostream>
using namespace std;
template <typename T, int limit>
T arrymax(T arry[], T n)
{
    if (n < limit)
    {
        T max = arry[0];
        for (int i = 0; i < n; i++)
        {
            if (arry[i] > max)
            {
                max = arry[i];
            }
        }
        return max;
    }
}
int main()
{
    int arry[]{1, 2, 3, 5, 6, 9, 7};

    cout << arrymax<int,100>(arry, 7) << endl;

    float arry2[]{2.5, 3.7, 6.1, 2.4, 9.8, 8.7};
    cout << arrymax<float,5>(arry2, 6);

    return 0;
}