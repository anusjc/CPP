#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
void insert_begin(Node **head, int new_data)
{
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head);
    (*head) = new_node;
}
void insert_after_a_node(Node *prev, int new_data)
{
    if (prev == NULL)
    {
        return;
    }
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = prev->next;
    prev->next = new_node;
}
void insert_end(Node **head, int new_data)
{
    Node *new_node = new Node();
    Node *last = *head;
    new_node->data = new_data;
    new_node->next = NULL;
    if (*head == NULL)
    {
        *head = new_node;
        return;
    }
    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = new_node;
    return;
}
void delete_node(Node **head, int key)
{
    Node *temp = *head;
    Node *prev = NULL;
    if (temp != NULL && temp->data == key)
    {
        *head = temp->next;
        delete temp;
        return;
    }
    else
    {
        while (temp != NULL && temp->data != key)
        {
            prev = temp;
            temp = temp->next;
        }
        if (temp == NULL)
            return;
        prev->next = temp->next;
        delete temp;
    }
}
void print_list(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
}

int main()
{
    Node *head = NULL;
    insert_begin(&head, 1);
    insert_begin(&head, 2);
    insert_begin(&head, 3);
    insert_begin(&head, 4);
    insert_after_a_node(head->next, 5);
    insert_end(&head, 6);
    delete_node(&head, 3);
    delete_node(&head, 6);
    print_list(head);
}