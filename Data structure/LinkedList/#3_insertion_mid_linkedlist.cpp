#include <iostream>
#define NEWLINE cout<<endl;
using namespace std;
// class for node
class Node
{
    public:
        int data;
        Node * next;

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

        void deletion(int position);
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


void linkedlist ::insertion_mid(int data, int position)
{
    Node * NewNode = new Node(data);
    if( head == NULL)
    {
        head = NewNode;
        // return; // if i am using else{ } after if() then don't need to return,
        // but i am not using else{} after if() then i have to return, if not not 
        // program will not run.
    }
    else
    {
        Node * itr = head; // introduce a iterator, and points it initially to head
        Node * itr1 = head; // this line means that itr1 points to address of 10
        int count = 0;
        while(count!= position-2)
        {
            // inserted linkedlist is { 10 , 11 , 13, 14, 15, 16}
            
            itr = itr->next;  // here both itr and itr1 points to  11's node, which we wanted
            itr1 = itr1->next;
            
            count++;

        }     
        itr1 = itr1->next; // here we move itr1 by one node, to preserve the address of 13
        itr->next =NewNode; // here we put the address of 12 to 11's next
        NewNode->next = itr1; // here we put the address of 13, into 12's next

        /*
            instead of following the above three
            
            itr->next = NewNode;
            itr1= itr1->next;  // then the value strored at itr1 == NULL, because upgradation of itr1, we did
            // previously will move to 12
            NewNode->next = itr1;
            
        */

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
int main()
{
    linkedlist list;
    list.insert_element_tail(10);
    list.insert_element_tail(11);
    list.insert_element_tail(13);
    list.insert_element_tail(14);
    list.insert_element_tail(15);
    list.insert_element_tail(16);
    list.insertion_mid(12,4);
    list.display();
    
    return 0;
}