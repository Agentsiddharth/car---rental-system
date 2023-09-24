#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next = NULL;
    node(int x)
    {
        data = x;
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
    return head;
}
node *deletelast(node *head)
{
    if (head == NULL)
        return NULL;

    if (head->next == NULL)
    {
        delete head;
        return NULL;
    }
    node *curr = head;
    while (curr->next->next != NULL)
    {
        curr = curr->next;
    }
    delete curr->next;
    curr->next = NULL;
    return head;
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
    head = insertend(head, 40);
    display(head);
    head = deletelast(head);
    cout << endl;
    display(head);

    return 0;
}