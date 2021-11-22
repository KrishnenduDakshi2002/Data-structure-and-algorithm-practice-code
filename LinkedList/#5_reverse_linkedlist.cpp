#include <iostream>
#include "linkedlist.hh"
#define NEWLINE cout<<endl;
using namespace std;
class reverse_list : public linkedlist, public Node{

    public:
        void reverse();

};

void reverse_list ::reverse()
{
   Node * prePtr = NULL;
   Node * currentPtr = head;
   Node * nextPtr;

   while(currentPtr != NULL)
   {
       nextPtr = currentPtr->next;
       currentPtr->next = prePtr;

       prePtr = currentPtr;
       currentPtr = nextPtr;
       
       
   }
   head = prePtr;

}



int main()
{
    reverse_list list;
    list.insert_element_tail(11);
    list.insert_element_tail(12);
    list.insert_element_tail(13);
    list.insert_element_tail(14);
    list.insert_element_tail(15);

    list.display();
    list.reverse();
    NEWLINE
    list.display();
    
    
    return 0;
}