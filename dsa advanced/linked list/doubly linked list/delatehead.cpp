#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
    node *prev;
    node(int x)
    {
        data = x;
        prev = NULL;
        next = NULL;
    }
};
node *insertend(node *head, int x)
{
    node *temp = new node(x);
    if (head == NULL)
    {
        return temp;
    }
    node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = temp;
    temp->prev = curr;
    return head;
}
node *deletehead(node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    if (head->next == NULL)
    {
        delete head;
        return NULL;
    }
    else
    {
        node *temp = head;
        head = head->next;
        head->prev = NULL;
        delete temp;
        return head;
    }
}
void display(node *head)
{
    node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
}

int main()
{
    node *head = NULL;
    head = insertend(head, 10);
    head = insertend(head, 20);
    head = insertend(head, 30);
    display(head);
    cout << endl;
    head = deletehead(head);
    display(head);

    return 0;
}