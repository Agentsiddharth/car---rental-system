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
        temp->next = temp;
        return temp;
    }
    temp->next = head->next;
    head->next = temp;
    swap(head->data, temp->data);
    return temp;
}
node *deletehead(node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    if (head->next == head)
    {
        delete head;
        return NULL;
    }
    head->data = head->next->data;
    node *temp = head->next;
    head->next = head->next->next;
    delete temp;
    return head;
}
node *deletekth(node *head, int x)
{
    if (head == NULL)
    {
        return head;
    }
    if (x == 1)
    {
        return deletehead(head);
    }
    node *curr = head;
    for (int i = 0; i < x - 2; i++)
    {
        curr = curr->next;
    }
    node *temp = curr->next;
    curr->next = curr->next->next;
    delete temp;
    return head;
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
    cout << endl;
}
int main()
{
    node *head = NULL;
    head = insertend(head, 10);
    head = insertend(head, 20);
    head = insertend(head, 30);
    head = insertend(head, 40);
    head = insertend(head, 50);
    display(head);
    head = deletekth(head, 5);
    display(head);

    return 0;
}