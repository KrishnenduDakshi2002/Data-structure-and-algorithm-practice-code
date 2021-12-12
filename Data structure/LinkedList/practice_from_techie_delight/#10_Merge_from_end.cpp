#include <iostream>
#include "linkedlist.hh"
#define NEWLINE cout<<endl;
using namespace std;


class Merge_end :public Node, public linkedlist
{
    public:
        Node * reverse(Merge_end &list);
        void merge_end(Merge_end &main, Merge_end &sub);

};
Node * Merge_end ::reverse(Merge_end &list)
{
    Node *current = list.head;
    Node * pre = NULL;
    Node * post;

    while(current!= NULL)
    {
        post = current->next;

        current->next = pre;
        pre = current;
        current = post;
    }
    head = pre;
    return head;
}


void Merge_end ::merge_end(Merge_end &main, Merge_end &sub)
{
// For reversing the given list
    Node * headRef_main = main.reverse(main);
    Node * headRef_sub = sub.reverse(sub);
// just for checking the results
    // main.display();
    // NEWLINE
    // sub.display();

    Node * itr_main = headRef_main;
    Node *post;
    Node * itr_sub = headRef_sub;

    while(itr_main != NULL)
    {
        Node *temp = new Node();
        post = itr_main->next;

        temp->data = itr_sub->data;
        itr_main->next = temp;
        temp->next = post;

        itr_main = post;
        itr_sub = itr_sub->next;
    }
    
}

int main()
{
    Merge_end main_list;
    Merge_end sub_list;

    main_list.insert_element_tail(10);
    main_list.insert_element_tail(11);
    main_list.insert_element_tail(12);
    main_list.insert_element_tail(13);

    sub_list.insert_element_tail(1);
    sub_list.insert_element_tail(2);
    sub_list.insert_element_tail(3);
    sub_list.insert_element_tail(4);

    main_list.display();
    //main_list.reverse(main_list);
    NEWLINE
    main_list.display();
    NEWLINE
    main_list.merge_end(main_list, sub_list);
    main_list.display();


    
    return 0;
}