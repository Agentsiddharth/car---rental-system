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
void display(node *head)
{
    node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
}
node *insertpos(node *head, int pos, int x)
{
    node *temp = new node(x);
    if (pos == 1)
    {
        temp->next = head;
        return temp;
    }
    node *curr = head;
    for (int i = 1; i <= pos - 2 && curr != NULL; i++)
    {
        curr = curr->next;
    }
    if (curr == NULL)
    {
        return head;
    }
    temp->next = curr->next;
    curr->next = temp;
    return head;
}
int main()
{
    node *head = NULL;
    head = insertend(head, 10);
    head = insertend(head, 20);
    head = insertend(head, 30);
    head = insertend(head, 40);
    display(head);
    head = insertpos(head, 3, 900);
    cout << endl;
    display(head);

    return 0;
}