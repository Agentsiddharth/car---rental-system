#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
    node *prev;
    node(int x)
    {
        prev = NULL;
        next = NULL;
    }
};
void display(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
int main()
{
    node *head = new node(10);
    node *temp1 = new node(10);
    node *temp2 = new node(10);
    head->next = temp1;
    temp1->prev = head;
    temp1->next = temp2;
    temp2->prev = temp1;
    display(head);
    

    return 0;
}