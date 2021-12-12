#include <iostream>
#include "linkedlist.hh"
#define NEWLINE cout<<endl;
using namespace std;


class slice : public Node , public linkedlist
{
    public:
        void slice_list(slice &obj);

};

void slice::slice_list(slice &obj)
{
    int count =1;
    Node * current = head;
    Node * pre = NULL;
    Node * todelete = head;
    


    while(current!= NULL)
    {
        if(count%2 == 0)
        {

            obj.insert_element_tail(current->data);
            pre->next = current->next;
             

        }
        pre = current;
        current = current->next;
       
        
        count++;

        
    }

    
}
int main()
{
    slice list1;
    slice list2;

    list1.insert_element_tail(10);
    list1.insert_element_tail(11);
    list1.insert_element_tail(12);
    list1.insert_element_tail(13);
    list1.insert_element_tail(14);
    list1.insert_element_tail(15);
    list1.slice_list(list2);
    list1.display();
    NEWLINE
    list2.display();
    
    return 0;
}