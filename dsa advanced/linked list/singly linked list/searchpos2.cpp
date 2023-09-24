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
    if (head == NULL)
    {
        return -1;
    }
    if (head->data == target)
    {
        return 1;
    }
    else
    {
        int res = search(head->next, target);
        if (res == -1)
        {
            return -1;
        }
        else
        {
            return res + 1;
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
    cout << search(head, 80);

    return 0;
}