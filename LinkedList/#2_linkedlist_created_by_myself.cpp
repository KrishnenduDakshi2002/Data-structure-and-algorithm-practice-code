
/*
    https://slaystudy.com/singly-linked-list-program-in-c-using-class/

    you can refer this, 
    but the code written below, is totally written by me , after several trials, after understanding 
    deeply
*/


#include <iostream>
#define NEWLINE cout<<endl;
using namespace std;

class Node
{
    public:
        int data;
        Node * next;

        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
};

class linkedlist{

    public:

        //Node * head = NULL;  // this line is perfectly fine, but it is throwing warning
        Node * head;
        linkedlist(){ head = NULL;} // so used constuctor to assign null to head pointer

        void insert_element_tail(int data);
        void insert_element_head(int data);
        void display_element();
};

void linkedlist ::insert_element_tail(int data)
{
    Node *newnode = new Node(data);
    if(head == NULL)
    {
        head = newnode; // line means that, initially newnode pointer stores the address of the new node
        // but when head == NULL(always true for first invoke of insert_element_tail()), but when the condition is
        // true, then head = newnnode, means head pointer will now store address new node as newnode pointer
        return;
    }
    
    Node * temp = head;  // it is a iterator which will travel along all elements
// initially I pointed the temp pointer to head, then I will make it travel along all elements
    while(temp->next != NULL)
    {
        temp = temp->next; // it will move the temp pointer last node
    }

    // now temp is pointing to last node, and set that, (temp)(now temp is actually holding the last node address, and by this
    // temp->next(i accessed the address storing section of last node, which is previously storing NULL),now storing address of newnode)
    temp->next = newnode; 
}

void linkedlist ::display_element()
{
    // making another iterator for traversal
    Node * itr = head; // again pointing to head
    
    /*
        This line of code will not print the last inserted element, because (itr->next) is actually address storing section
        of last element, which stores NULL
    */
    
    // while(itr->next != NULL)
    // {
    //     cout<<itr->data<<" ";
    //     itr = itr->next;
    // }

    while(itr!= NULL)
    {
        cout<<itr->data<<" ";
        itr = itr->next;
    }
}

int main()
{
    linkedlist list;
    list.insert_element_tail(10);
    list.insert_element_tail(11);
    list.insert_element_tail(12);
    list.insert_element_tail(13);
    list.insert_element_tail(14);

    list.display_element();
    
    return 0;
}