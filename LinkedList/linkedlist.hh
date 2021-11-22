// for insertion elements and displaying elements
#include <iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node * next;
        Node(){}
        Node(int data){ this-> data = data;}
};

// class for linkedlist

class linkedlist{
    public:
        Node * head;
        linkedlist(){ head = NULL;}

    // member methods
        void insert_element_tail(int data);
    
        void insertion_mid(int data, int position);
        void display();
        
};

// defination of member methods

void linkedlist ::insert_element_tail(int data)
{
    Node * newnode = new Node(data);

    if(head ==NULL)
    {
        head = newnode;
    }
    else{

        Node * itr = head;
        while( itr->next != NULL)
        {
            itr = itr->next;
        }
        itr->next = newnode;
    }
}

void linkedlist ::display()
{
    // making another iterator for traversal
    Node * itr = head; // again pointing to head
    
    
    while(itr!= NULL)
    {
        cout<<itr->data<<" ";
        itr = itr->next;
    }
}
