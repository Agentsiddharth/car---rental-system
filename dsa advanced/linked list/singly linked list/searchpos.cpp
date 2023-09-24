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
int search(node *head, int target)
{
    node *curr = head;
    int pos = 1;
    while (curr != NULL)
    {
        if (curr->data == target)
        {
            return pos;
        }
        else
        {
            pos++;
            curr = curr->next;
        }
    }
}

int main()
{
    node *head = NULL;
    head = insertend(head, 10);
    head = insertend(head, 20);
    head = insertend(head, 30);
    head = insertend(head, 40);
    cout << search(head, 40);

    return 0;
}