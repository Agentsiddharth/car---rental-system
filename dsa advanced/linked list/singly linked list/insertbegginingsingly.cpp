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
node *insertbeg(node *head, int x)
{
    node *temp = new node(x);
    temp->next = head;
    return temp;
}
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
    node *head = NULL;
    head = insertbeg(head, 10);
    head = insertbeg(head, 20);
    head = insertbeg(head, 30);
    display(head);
    return 0;
}