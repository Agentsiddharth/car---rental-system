#include <iostream>
using namespace std;
int volume(int a)
{
    return (a * a * a);
}
int volume(int a, int b, int c)
{
    return (a * b * c);
}
int main()
{
    int a, b, c;
    cout << "enter the side:-";
    cin>>a>>b>>c;
    cout<<volume(a,b,c);
    return 0;
}