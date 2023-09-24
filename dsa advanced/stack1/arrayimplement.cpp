#include <iostream>
using namespace std;
struct mystack
{
    int *stack;
    int cap;
    int top;
    mystack(int x)
    {
        cap = x;
        stack = new int[cap];
        top = -1;
    }
    void push(int x)
    {
        if (top == cap - 1)
        {
            cout << "Overflow";
        }
        else
        {
            top++;
            stack[top] = x;
        }
    }

    int pop()
    {
        if (top == -1)
        {
            return -1;
        }
        int res = stack[top];
        top--;
        return res;
    }

    int peek()
    {
        if (top == -1)
        {
            return -1;
        }
        return stack[top];
    }

    int size()
    {
        return top + 1;
    }

    bool isempty()
    {
        return top == -1;
    }
};

int main()
{

    mystack s(5);
    s.push(5);
    s.push(4);
    s.push(2);
    s.push(2);
    s.push(2);

    cout << s.pop() << endl;
    cout << s.size() << endl;
    cout << s.peek() << endl;
    cout << s.isempty() << endl;

    return 0;
}