#include <iostream>
#include "linkedlist.hh"
#define NEWLINE cout<<endl;
using namespace std;

class Merge : public Node , public linkedlist
{
    public:
        void merge(Merge &main_list , Merge &sub_list);
};
void Merge ::merge(Merge &main_list , Merge &sub_list)
{
    Node * main_itr = main_list.head;
    Node * sub_itr = sub_list.head;
    Node * sub_pre = NULL;


    int count = 1;
    while (main_itr->next != NULL)
    {

        
        if(count%2 == 0)
        {
            main_itr->data = sub_itr->data;
            
        }

        else{}

        main_itr = main_itr->next;
        sub_itr = sub_itr->next;
        count++;
    }
    
}

int main()
{
    Merge main_list;
    Merge sub_list;

    main_list.insert_element_tail(1);
    main_list.insert_element_tail(2);
    main_list.insert_element_tail(3);
    main_list.insert_element_tail(4);
    main_list.insert_element_tail(5);

    sub_list.insert_element_tail(9);
    sub_list.insert_element_tail(10);
    sub_list.insert_element_tail(11);
    sub_list.insert_element_tail(12);
    sub_list.insert_element_tail(13);

    main_list.merge(main_list,sub_list);
    main_list.display();
    
    
    return 0;
}