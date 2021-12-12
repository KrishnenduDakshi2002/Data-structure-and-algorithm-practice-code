#include <iostream>
#include "linkedlist.hh"
#define NEWLINE cout<<endl;
using namespace std;

class Intersection : public Node, public linkedlist
{
    public:
        void Intersection_list(Intersection &main_list , Intersection &sub_list, Intersection &New_list);
};

void Intersection ::Intersection_list(Intersection &main_list , Intersection &sub_list, Intersection &New_list)
{
    // main list iterator
    Node *main_itr = main_list.head;
    Node *pre = NULL;
    Node *current = main_list.head;
    Node *post;

    // sub list itretor
    Node *itr = sub_list.head;

    while(main_itr->next != NULL)
    {
        while(current != NULL)
        {
            post = current->next;
            if(current->data == itr->data){
                
                New_list.insert_element_tail(itr->data);
                itr = itr->next;

            }
            pre = current;
            current = post;

        }
        main_itr= main_itr->next;
    }
}

int main()
{
    Intersection main_list;
    Intersection sub_list;
    Intersection New_list;

    main_list.insert_element_tail(1);
    main_list.insert_element_tail(3);
    main_list.insert_element_tail(4);
    main_list.insert_element_tail(4);
    main_list.insert_element_tail(5);

    sub_list.insert_element_tail(3);
    sub_list.insert_element_tail(4);
    sub_list.insert_element_tail(5);
    sub_list.insert_element_tail(7);

    New_list.Intersection_list(main_list,sub_list,New_list);
    main_list.display();
    NEWLINE
    sub_list.display();
    NEWLINE
    New_list.display();
    
    return 0;
}