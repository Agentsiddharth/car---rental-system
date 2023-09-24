#include <iostream>
using namespace std;
struct node
{
    int data;
    node *prev;
    node *next;
    node(int x)
    {
        data = x;
        prev = NULL;
        next = NULL;
    }
};

node *insertbegin(node *head, int x)
{
    node *temp = new node(x);
    temp->next = head;
    if (head != NULL)
    {
        head->prev = temp;
    }
    return temp;
}
void display(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
int main()
{
    node *head = NULL;
    head = insertbegin(head, 10);
    head = insertbegin(head, 20);
    head = insertbegin(head, 30);
    display(head);

    return 0;
}