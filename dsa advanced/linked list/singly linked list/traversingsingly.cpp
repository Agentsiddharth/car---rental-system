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
void print(struct node *head)
{
    node *current = head;
    while (current != NULL)
    {
        cout << current->data << " ";
        current = current->next;
    }
}

int main()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    print(head);
    return 0;
}