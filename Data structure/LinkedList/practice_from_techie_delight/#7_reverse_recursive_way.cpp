

//   UNSUCESSFUL

#include <iostream>
#include "linkedlist.hh"
#define NEWLINE cout<<endl;
using namespace std;

class Reverse : public Node , public linkedlist
{
    void test(Node * current, Node * pre, Node * post);
    public:
    Node * itr = head;

        Reverse & revrese(Reverse &obj);
};
void Reverse ::test(Node * current, Node * pre, Node * post)
{
    
    
    post = current->next;
    current->next = pre;
    pre = current;
    current = post;
    
    
}
Reverse & Reverse ::revrese(Reverse &obj)
{
    Node * pre = NULL;
    Node * current = head;
    Node * post;
    

}

int main()
{
    
    return 0;
}