#include <iostream>
using namespace std;
void char1(char start, char end)
{
    for (int i = int(start); i <= int(end); i++)
    {
        cout << char(i) << " ";
    }
}
int main()
{
    char start_char, end_char;
    cout << "enter starting character:-";
    cin >> start_char;
    cout << "enter end character:-";
    cin >> end_char;
    char1(start_char, end_char);

    return 0;
}