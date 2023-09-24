// #include <iostream>
// using namespace std;
// struct node
// {
//     int data;
//     struct node *next;
// };
// struct node *insert_beginning(struct node *head, int value)
// {
//     struct node *newnode = (struct node *)malloc(sizeof(struct node));
//     if (newnode == NULL)
//     {
//         cout << "memory allocation failed" << endl;
//         return head;
//     }
//     newnode->data = value;
//     newnode->next = head;
//     head = newnode;
//     return head;
// }
// void display(struct node *head)
// {
//     struct node *current = head;
//     while (current != NULL)
//     {

//         cout << current->data << " ";
//         current = current->next;
//     }
//     cout << endl;
// }
// int main()
// {
//     struct node *head = NULL;
//     head = insert_beginning(head, 3);
//     head = insert_beginning(head, 7);
//     head = insert_beginning(head, 11);
//     display(head);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// struct node
// {
//     int data;
//     struct node *next;
// };
// struct node *insert_beginning(struct node *head, int value)
// {
//     struct node *newnode = (struct node *)malloc(sizeof(struct node));
//     if (newnode == NULL)
//     {
//         cout << "memory allocation failed" << endl;
//         return head;
//     }
//     newnode->data = value;
//     newnode->next = head;
//     head = newnode;
//     return head;
// }
// void max(struct node *head)
// {
//     struct node *current = head;
//     int max = current->data;
//     int min = current->data;
//     current = current->next;
//     while (current != NULL)
//     {
//         if (max < current->data)
//         {
//             max = current->data;
//         }
//         else if (min > current->data)
//         {
//             min = current->data;
//         }
//         current = current->next;
//     }
//     cout << max << " " << min;
// }
// int main()
// {
//     struct node *head = NULL;
//     head = insert_beginning(head, 100);
//     head = insert_beginning(head, 7);
//     head = insert_beginning(head, 110);
//     head = insert_beginning(head, 11);
//     max(head);
//     return 0;
// }

