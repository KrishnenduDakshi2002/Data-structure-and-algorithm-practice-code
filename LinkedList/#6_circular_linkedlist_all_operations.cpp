
/*
https://www.youtube.com/watch?v=1t8NAjIXvVA&t=570s    
*/


#include <iostream>

#define NEWLINE cout << endl;
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node() {}
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
class insertion_circular
{
public:
    

    // defining member mothods
    void insert_at_head_circular(Node* &head,int data);
    void insert_at_tail_circular(Node* &head,int data);
    void deletion_node(Node * &head,int position);
    void display_cir(Node * &head, int &size);

};

void insertion_circular::insert_at_head_circular(Node * &head,int data)
{

    Node *newnode = new Node(data);
    if (head == NULL)
    {
        newnode->next = newnode;
        head = newnode;
    }
    else
    {
    Node *itr = head;
        while (itr->next != head)
        {
            itr = itr->next;
        }
        itr->next = newnode; 
        newnode->next = head;
        head = newnode;
    }
}
void insertion_circular::insert_at_tail_circular(Node * &head,int data)
{

    Node *newnode = new Node(data);
    // when linkedlist is empty, and we are inserting the very first element
    if (head == NULL)
    {
        insert_at_head_circular(head,data);
    }

    // when linkedlist is not empty
    Node *itr = head;
    while (itr->next != head)
    {
        itr = itr->next;
    }
   
    itr->next = newnode;
    newnode->next = head;
}

void insertion_circular::deletion_node(Node * &head, int position)
{
    if(position==1)
    {
        Node * itr = head;
        

        while(itr->next != head)
        {
            itr = itr->next;

        }
        Node * todelete = head;
        itr->next = head->next;
        head = head->next;

        delete todelete;



    }

    else{

        int count =1;
        Node * itr = head;
        while(count != position-1)
        {
            itr = itr->next;
            count++;
        }
        Node * todelete = itr->next; // now todelete has the address of node, we want to delete
        itr->next = itr->next->next;

        delete todelete;
    }
    
}

void insertion_circular ::display_cir(Node * &head , int &size)
{
    int size_of_list=0;
    Node *itr = head;
    do
    {
        size_of_list++;
        cout << itr->data << " ";
        itr = itr->next;
    } while (itr != head);
    size = size_of_list;
}

int main()
{
    int size_of_linkedList;
    insertion_circular list;
    Node * head = NULL;
    list.insert_at_head_circular(head,10); // you have to insert first element using insert_at_head_circular()
    // unless, it will create two inpressions of 10
    list.insert_at_tail_circular(head,11);
    list.insert_at_tail_circular(head,12);
    list.insert_at_tail_circular(head,13);
    list.insert_at_tail_circular(head,14);
    list.insert_at_head_circular(head,9);
    list.insert_at_head_circular(head,8);
    list.insert_at_head_circular(head,7);
    list.insert_at_tail_circular(head, 15);

    list.display_cir(head, size_of_linkedList);
    NEWLINE
    cout<<"Now size of linkedlist is "<<size_of_linkedList<<endl;
    NEWLINE
    
// invoking deletion method
    list.deletion_node(head,1);  // deleting 7
    list.display_cir(head, size_of_linkedList); 
    NEWLINE
    cout<<"Now size of linkedlist is "<<size_of_linkedList<<endl;
    NEWLINE
// invoking deletion method
    list.deletion_node(head,size_of_linkedList);  // deleting last element
    list.display_cir(head, size_of_linkedList);
    NEWLINE
    cout<<"Now size of linkedlist is "<<size_of_linkedList<<endl;
    NEWLINE

    return 0;
}