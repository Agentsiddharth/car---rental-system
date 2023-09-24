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
        next = NULL;
        prev = NULL;
    }
};
node *insertbegin(node *head, int x)
{
    node *temp = new node(x);
    if (head == NULL)
    {
        temp->next = temp;
        temp->prev = temp;
        return temp;
    }
    temp->prev = head->prev;
    temp->next = head;
    head->prev->next = temp;
    head->prev = temp;
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
    cout << endl;
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