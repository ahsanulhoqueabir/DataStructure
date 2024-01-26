#include <bits/stdc++.h>
using namespace std;

class node
{
    int value;
    node *next;

public:
    node(int value)
    {
        this->value = value;
        this->next = NULL;
    }

    friend void insertInTail(node *&head, int value);
    friend void display(node *head);
    friend void insertAtHead(node *&head, int value);
    friend bool search(node *head, int key);
    friend void deleteNode(node *head, int position);
    friend void deleteHead(node *&head); 
};
void insertAtHead(node *&head, int value)
{
    node *newNode = new node(value);
    newNode->next = head;
    head = newNode;
}

void insertInTail(node *&head, int value)
{
    node *newNode = new node(value);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}
bool search(node *head, int key)
{
    node *temp = head;
    while (temp->next != NULL)
    {
        if (temp->value == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}
void deleteNode(node *head, int position)
{
    node *temp = head;

    for (int i = 0; i < position - 1; i++)
    {
        temp = temp->next;
    }
    node *temp2 = temp->next;
    temp->next = temp2->next;
    delete temp2;
}
void deleteHead(node *&head){
    node *temp = head;
    head = head->next;
    delete temp;
}

int main()
{
    node *head = NULL;
    insertInTail(head, 20);
    insertInTail(head, 30);
    insertInTail(head, 40);
    insertInTail(head, 50);
    cout << "Before Adding Element In head" << endl;
    display(head);

    insertAtHead(head, 10);
    cout << "Before Adding Element In head" << endl;
    display(head);

    insertInTail(head, 60);
    cout << "Before Adding Element In tail" << endl;
    display(head);

    cout << "Search a Value: ";
    int n;
    cin >> n;
    cout << (search(head, n) ? "Available" : "Not Available") << endl;

    deleteNode(head, 3);
    cout << "After Deleting Element In tail" << endl;
    display(head);

    deleteHead(head);
    display(head);
    cout << "After Deleting Element In head" << endl;
}
