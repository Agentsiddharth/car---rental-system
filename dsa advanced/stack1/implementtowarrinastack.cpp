#include <iostream>
using namespace std;
struct mystruct
{
    int *arr;
    int top1, top2;
    int cap;
    mystruct(int x)
    {
        cap = x;
        top1 = -1;
        top2 = cap;
        arr = new int(cap);
    }

    void push1(int x)
    {
        if (top1 < top2 - 1)
        {
            top1++;
            arr[top1] = x;
        }
    }
    void push2(int x)
    {
        if (top1 < top2 - 1)
        {
            top2--;
            arr[top2] = x;
        }
    }

    int pop1()
    {
        if (top1 >= 0)
        {
            int res = arr[top1];
            top1--;
            return res;
        }
        else
        {
            exit(1);
        }
    }
    int pop2()
    {
        if (top2 < cap)
        {
            int res = arr[top2];
            top2++;
            return res;
        }
        else
        {
            exit(1);
        }
    }
};

int main()
{
    mystruct s1(3);
    s1.push1(1);
    s1.push1(2);
    s1.push2(4);
    cout<<s1.pop1()<<endl;
    cout<<s1.pop2();

    return 0;
}