#include <iostream>
#define NEWLINE cout << endl;
using namespace std;
class Node // node class
{
public:
    int data;
    Node *next; // it will store the address of the next node class

    Node() // default constructor
    {
        data = 0;
        next = NULL;
    }

    Node(int data) // paramaterised condtructor
    {
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList
{

public:
    Node *head;
    LinkedList() { head = NULL; } // default contructor

    // function to insert a node
    void Insert_node(int);
    void print_node();
};

void LinkedList ::Insert_node(int data)
{
    // create a new node
    Node *newnode = new Node(data);

    // Assign to head
    if (head == NULL)
    {
        
        cout<< "address of head "<<&head<<endl;

        cout<< "address of newnode pointer "<<&newnode<<endl;
        head = newnode;
        cout<< &head<<endl;
        cout << "Running if()" << endl; // for checking
    }

    else
    {
        Node *temp = head;

        while (temp->next != NULL)
        {
            // upgrade temp
            cout<<"address of temp before upgradation "<<&temp<<endl;
            temp = temp->next;
            cout<<"address of temp after upgradation "<<&temp<<endl;
        }
        // insert at the last
        temp->next = newnode;
        cout << "Running else{}" << endl;
    }
}

void LinkedList ::print_node()
{
    Node *temp = head;

    if (head == NULL)
    {
        cout << "list is empty" << endl;
    }

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    LinkedList llist;

    llist.Insert_node(1);
    llist.Insert_node(2);
    llist.Insert_node(3);
    llist.Insert_node(40);

    cout << " elements are" << endl;
    // printing the list
    llist.print_node();

    return 0;
}