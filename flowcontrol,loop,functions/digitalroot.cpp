#include <iostream>
using namespace std;

// function for sum of digits of given integer 
int digitsum(int n)
{
    int count = 0, rem = 0;
    while (n > 0)
    {
        rem = n % 10;
        count += rem;
        n /= 10;
    }
    return count;
}


//function to check whether the sum is two digit
void digitalroot(int n)
{
    int num = digitsum(n);
    int num2;
    if (num < 10)
    {
        cout << num;
    }
    else
    {
        cout << digitsum(num);
    }
}

//main function
int main()
{
    int n;
    cin >> n;
    digitalroot(n);

    return 0;
}