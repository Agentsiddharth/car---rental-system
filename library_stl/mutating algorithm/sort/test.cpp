#include <iostream>
#include <Windows.h>
int main()
{
    for (int i = 0; i < 1000; i++)
    {
        for (int j = 999; j >= 0; j--)
        {

            HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(hConsole, i);
            std::cout << "This text is blue" << std::endl;
            SetConsoleTextAttribute(hConsole, j);
        }
    }
}