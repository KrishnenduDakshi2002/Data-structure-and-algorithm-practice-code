#include <iostream>
#include <stdlib.h>
#include "linkedlist.hh"
#define NEWLINE cout << endl;
using namespace std;

class deletion_class : public Node, public linkedlist
{
public:
    void deletion(int index);
};

void deletion_class::deletion(int index)
{
    Node *itr = head;
    Node *itr1 = head;
    Node *itr_first_index = head;
    int count = 0;
    if (index == 1)
    {
        itr_first_index = itr_first_index->next;
        head = itr_first_index;
    }
    else
    {
        while (count != index - 2)
        {
            itr = itr->next;
            itr1 = itr1->next;
            count++;
        }
        itr1 = itr1->next;
        itr1 = itr1->next;
        itr->next = itr1;
    }
}

int main()
{
    int size = 5;

    deletion_class list;
    srand(time(0));

    for (int i = 1; i <= size; i++)
    {
        list.insert_element_tail(rand() % 50 + 1);
    }
    list.display();
    list.deletion(1);
    NEWLINE
    list.display();

    return 0;
}
