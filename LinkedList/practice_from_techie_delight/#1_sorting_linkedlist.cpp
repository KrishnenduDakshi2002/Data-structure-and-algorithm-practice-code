#include <iostream>
#include "linkedlist.hh"
#define NEWLINE cout << endl;
using namespace std;

class sorting_list : public Node, public linkedlist
{
public:

    void sorting(int size);
    
};



void sorting_list ::sorting(int size)
{

    Node *staticPtr = head;
    Node * currentPtr= head;
    Node * postPtr;

    for(int i = 0; i<size ; i++)
    {
        while(currentPtr->next != NULL)
        {
            postPtr = currentPtr->next;
            if(currentPtr->data > postPtr->data)
            {
                // here I am not messing around with nodes address, just changing the values in it

                int temp;  // to store the value of currentPtr->data for temporarily
                temp = currentPtr->data;
                currentPtr->data = postPtr->data;
                postPtr->data = temp;

                
            }

            currentPtr = postPtr;
            postPtr = postPtr->next;
        }

        currentPtr = head;
        postPtr = currentPtr->next;
    }
  
    

}

int main()
{
    int size = 6;
    sorting_list list;
    list.insert_element_tail(10);
    list.insert_element_tail(20);
    list.insert_element_tail(9);
    list.insert_element_tail(11);
    list.insert_element_tail(3);
    list.insert_element_tail(2);


    list.display();
    list.sorting(size);
    NEWLINE
    list.display();

    return 0;
}