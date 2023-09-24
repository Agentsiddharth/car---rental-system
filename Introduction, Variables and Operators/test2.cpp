// //
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
//     int sum = 0;
//     struct node *current = head;
//     while (current != NULL)
//     {
//         sum += current->data;
//         current = current->next;
//     }
//     cout <<sum;
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

// number greater than 10;
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
//         if (current->data > 10)
//         {
//             cout << current->data << " ";
//         }
//         current = current->next;
//     }
// }
// int main()
// {
//     struct node *head = NULL;
//     head = insert_beginning(head, 3);
//     head = insert_beginning(head, 7);
//     head = insert_beginning(head, 11);
//     head = insert_beginning(head, 100);
//     cout << "the value which are greater than 10 are: ";
//     display(head);
//     return 0;
// }

// double the list element
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
//         current->data = current->data * 2;
//         cout << current->data << " ";

//         current = current->next;
//     }
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






// min and max
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
//     int min = current->data;
//     int max = current->data;
//     while (current != NULL)
//     {
//         if ((current->data) > max)
//         {
//             max = current->data;
//         }
//         else if ((current->data) < min)
//         {
//             min = current->data;
//         }
//         current = current->next;
//     }
//     cout << min << " " << max << endl;
// }
// int main()
// {
//     struct node *head = NULL;
//     head = insert_beginning(head, 3);
//     head = insert_beginning(head, 2);
//     head = insert_beginning(head, 7);
//     head = insert_beginning(head, 11);
//     display(head);
//     return 0;
// }
