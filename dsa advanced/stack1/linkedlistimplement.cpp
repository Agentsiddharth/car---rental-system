#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
    node(int x)
    {
        data = x;
        next = NULL;
    }
};
struct mystack
{
    node *head;
    int size;
    mystack()
    {
        head = NULL;
        size = 0;
    }

    void push(int x)
    {
        node *temp = new node(x);
        temp->next = head;
        head = temp;
        size++;
    }

    int pop()
    {
        if (head == NULL)
        {
            return -1;
        }

        int res = head->data;
        node *temp = head;
        head = head->next;
        delete temp;
        size--;
        return res;
    }

    int size1()
    {
        return size;
    }

    bool isempty()
    {
        return (head == NULL);
    }

    int peek()
    {
        if (head == NULL)
        {
            return -1;
        }
        return head->data;
    }
};

int main()
{
    mystack s;
    s.push(10);
    s.push(40);
    s.push(30);
    s.push(20);
    cout << s.size1() << endl;
    cout << s.peek() << endl;
    cout << s.pop() << endl;
    cout << s.isempty() << endl;
    return 0;
}