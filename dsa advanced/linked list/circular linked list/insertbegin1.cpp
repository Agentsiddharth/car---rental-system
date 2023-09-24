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
node *insertbegin(node *head, int x)
{
    node *temp = new node(x);
    if (head == NULL)
    {
        temp->next = temp;
        return temp;
    }

    node *curr = head;
    while (curr->next != head)
    { 
        curr = curr->next;
    }
    curr->next = temp;
    temp->next = head;
    return temp;
}
void display(node *head)
{
    if (head == NULL)
    {
        return;
    }
    node *curr = head;
    do
    {
        cout << curr->data << " ";
        curr = curr->next;
    } while (curr != head);
}

int main()
{
    node *head = NULL;
    head = insertbegin(head, 10);
    head = insertbegin(head, 20);
    head = insertbegin(head, 30);
    head = insertbegin(head, 40);
    display(head);

    return 0;
}