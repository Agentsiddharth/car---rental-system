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
node *pahledalo(node *head, int x)
{
    node *temp = new node(x);
    if (head == NULL)
    {
        temp->next = temp;
        return temp;
    }
    else
    {
        node *curr = head;
        while (curr->next != head)
        {
            curr = curr->next;
        }
        curr->next = temp;
        temp->next = head;
    }
    return temp;
}
void dikhao(node *head)
{
    node *curr = head;
    if (curr == NULL)
    {
        return;
    }
    else
    {
        do
        {
            cout << curr->data << " ";
            curr = curr->next;
        } while (curr != head);
    }
}
int main()
{
    node *head = NULL;
    head = pahledalo(head, 10);
    head = pahledalo(head, 20);
    head = pahledalo(head, 30);
    head = pahledalo(head, 40);
    dikhao(head);

    return 0;
}