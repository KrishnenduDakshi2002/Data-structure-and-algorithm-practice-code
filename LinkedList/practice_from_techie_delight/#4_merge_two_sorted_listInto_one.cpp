#include <iostream>
#include "linkedlist.hh"
#define NEWLINE cout<<endl;
using namespace std;

class merge_sorted_list : public Node , public linkedlist
{
    public:
        void sorting(int size);
        void merge_sort_list(linkedlist & main_list , linkedlist &sub_list, int &size_main);
};

void merge_sorted_list ::merge_sort_list(linkedlist &main_list , linkedlist &sub_list, int &size_main)
{
// iterator main list
    Node * pre = NULL;
    Node * current_main = main_list.head;
    Node * post;
   
// iterator other list  
    Node * current_sub = sub_list.head;


    for (int i = 0; i < size_main; i++)
    {
        
        while(current_main->next != NULL)
        {
            post = current_main->next;
            if(current_sub->data < current_main->data  || current_sub->data == current_main->data)
            {
                Node *todelete = current_sub;
                Node *temp = new Node();
                temp->data = current_sub->data;
                temp->next = current_main;
                main_list.head = temp;

                current_sub = current_sub->next;

                delete todelete;

            }

            else if( current_sub->data < post->data && current_sub->data > current_main->data)
            {
                Node *todelete = current_sub;
                Node * temp = new Node();
                temp->data = current_sub->data;
                current_main->next = temp;
                temp->next = post;

                current_sub = current_sub->next;

                delete todelete;

            }

            pre = current_main;
            current_main = post;

        }

    }


}


int main()
{
    merge_sorted_list list_main;
    merge_sorted_list list_sub;
    int size =4;

    list_main.insert_element_tail(10);
    list_main.insert_element_tail(12);
    list_main.insert_element_tail(14);
    list_main.insert_element_tail(16);

    list_sub.insert_element_tail(9);
    list_sub.insert_element_tail(13);
    list_sub.insert_element_tail(15);
    list_sub.insert_element_tail(17);

    list_main.merge_sort_list(list_main,list_sub,size);
    list_main.display();

    // I am very happy. I did it in one chance, two days before  when I learned linkedlist, i cann't unserstand the concepts
    // and now not only i did it by myself but also in one chance, without any segmentation error

    return 0;
}