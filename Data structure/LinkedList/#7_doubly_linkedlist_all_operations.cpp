#include <iostream>
#define NEWLINE cout<<endl;
using namespace std;

class Node
{
    public:
        int data;
        Node * pre;
        Node * next;

        Node(int data)
        {
            this->data = data;
            pre = NULL;
            next = NULL;
            
        }
};

class doubly_linkedlist{

    public:
        Node * head;

        doubly_linkedlist(){ head = NULL;}

        // member functions
        void size_list(int & size);
        void insert_at_tail(int data);
        void insert_at_head(int data);
        void insert_at_mid(int data,int position);
        void display_forward();
        void display_backward();
        void reverse_list();
        void deletion(int position, int & size);
        void searching_list(int element);

};
//for size of list
void doubly_linkedlist:: size_list(int & size)
{
    int count = 1;
    Node * itr = head;
    while(itr->next != NULL)
    {
        itr = itr->next;
        count++;
    }
    size = count;
}
// defining inserting at head
void doubly_linkedlist ::insert_at_head(int data)
{
    Node * newnode = new Node(data);

    if(head == NULL)
    {
        head = newnode;
    }
    else{

        Node * itr = head;
        newnode->next = head;
        itr->pre = newnode;
        head = newnode;

    }
}

// defining inserting at tail
void doubly_linkedlist::insert_at_tail(int data)
{
    Node * newnode = new Node(data);

    if(head == NULL)
    {
        head = newnode;
    }

    else{

        Node * itr = head;

        while(itr->next != NULL)
        {
            itr = itr->next;
        }
        itr->next = newnode;
        newnode->pre = itr;
    }
}

// defining inserting at mid
void doubly_linkedlist ::insert_at_mid(int data, int position)
{
    Node * newnode = new Node(data);
    Node * itr = head;
    int count = 1;
    while( count != position-1)
    {
        itr = itr->next;
        count++;
    }
    Node * temp_itr = itr->next; // it will store the value of node which is right after itr pointed node
    // lines for linking itr pointed node with newnode
    itr->next = newnode;
    newnode->pre = itr;
    // lines for linking newnode and next node after itr pointed node
    newnode->next =temp_itr;
    temp_itr->pre = newnode;


}

// for displaying normal list
void doubly_linkedlist ::display_forward()
{
    
    Node * itr = head;
    while(itr != NULL)
    {
        cout<<itr->data<< " ";
        itr = itr->next;
    }

}

// for displaying reversed list
void doubly_linkedlist ::display_backward()
{
    Node * itr = head;
    while(itr != NULL)
    {
        cout<<itr->data<< " ";
        itr = itr->pre;
    }

}

// To reverse a given list
void doubly_linkedlist ::reverse_list()
{
    Node * itr = head;
    while(itr->next != NULL)
    {
        itr = itr->next;
    }
    head = itr;
    display_backward();
}

// to deletion of node
void doubly_linkedlist ::deletion(int position, int & size)
{

    if(position ==1)
    {
        Node * todelete = head;
        head->next->pre = NULL;
        head = head->next;
        delete todelete;
    }
    else if(position == size)
    {
        Node * currentPtr = head;
        Node * prePtr = NULL;
        while(currentPtr->next != NULL)
        {
            prePtr= currentPtr;
            currentPtr= currentPtr->next;

        }
        prePtr->next =NULL;
        delete currentPtr;
    }
    else
    {
        int count = 1;
        Node * prePtr = NULL;
        Node * currrentPtr = head;
        Node * postPtr;
        while(count != position)
        {
            postPtr = currrentPtr->next;

            prePtr= currrentPtr;
            currrentPtr = postPtr;
            count++;
        }
        prePtr->next = postPtr;
        postPtr->pre = prePtr;

        delete currrentPtr;
    }
    
}
// to search a list
void doubly_linkedlist ::searching_list(int element)
{
    Node * itr = head;
    while (itr->next != NULL)
    {
        if(itr->data == element)
        {
            cout<<"Item is found";
            break;
        }
        
        
        itr = itr->next;
        if(itr->next == NULL) cout<<"Element is not in our list";
        
    }
    
    

}


int main()
{
    int size;
    doubly_linkedlist list;
    list.insert_at_tail(10);
    list.insert_at_tail(11);
    list.insert_at_head(9);
    list.insert_at_mid(40,2); // insert_at_mid({{ insert value }}, {{ position of insert }})
    list.display_forward();
    // list.size_list(size);  // for printing size of list
    // NEWLINE
    // cout<<size<<endl;

    
    // list.reverse_list(); // use only when needed
    NEWLINE
    list.searching_list(90);
    list.deletion(2, size);
    NEWLINE
    list.display_forward();


    
    
    return 0;
}