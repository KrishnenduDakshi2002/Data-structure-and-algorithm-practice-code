#include <iostream>
#include "linkedlist.hh"
#define NEWLINE cout << endl;
using namespace std;
class node 
{
    public:
        int data;
        node * next;


        node()
        {
            this->data = 0;
            this->next = NULL;
        }
        node(int data)
        {
            this->data =data;
            this->next = NULL;
        }

};


class move_ele 
{
public:

    node * head;
    move_ele(){
        head = NULL;
    }
    
    
    void move_even(int size);
    void insert_element_tail(int data);
    void display();
};


// defination of member methods

void move_ele ::insert_element_tail(int data)
{
    node * newnode = new node(data);

    if(head ==NULL)
    {
        head = newnode;
    }
    else{

        node * itr = head;
        while( itr->next != NULL)
        {
            itr = itr->next;
        }
        itr->next = newnode;
    }
}

void move_ele ::display()
{
    // making another iterator for traversal
    node * itr = head; // again pointing to head
    
    
    while(itr!= NULL)
    {
        cout<<itr->data<<" ";
        itr = itr->next;
    }
}


void move_ele ::move_even(int size)
{
    node *itr_last = head;

    
    node *pre = NULL;
    node *current = head;
    node *post ;
    int count = 1;

    while (itr_last->next != NULL)
    {
        itr_last = itr_last->next;

    }

    while (current->next != NULL)
    {
        post = current->next;
        
        if (count == 2)
        {
            node * newnode = new node();
            node * todelete = current;
            newnode->data = current->data;

            pre->next = current->next;
            itr_last->next = newnode;

            delete todelete;

        }
        
        
        
        else if(count%2 == 0 && count!=2)
        {
            node * newnode = new node();
            node * todelete = current;
            node * temp = itr_last->next;


            newnode->data = current->data;
            pre->next = post;


            itr_last->next = newnode;
            newnode->next = temp;


            //delete todelete;

        }
        pre= current;
        current = post;
        count++;
    }
}

int main()
{
    int size = 8;
    move_ele list;
    list.insert_element_tail(10);
    list.insert_element_tail(11);
    list.insert_element_tail(12);
    list.insert_element_tail(13);
    list.insert_element_tail(14);
    list.insert_element_tail(15);
    list.insert_element_tail(16);
    list.insert_element_tail(17);


    list.display();
    NEWLINE
    list.move_even(size);
    list.display();




    return 0;
}