#include <iostream>
#include "linkedlist.hh"
#define NEWLINE cout << endl;
#define SIZE 2
using namespace std;

class Palindrome : public Node, public linkedlist
{

public:
    Palindrome slice(Palindrome &list1);
    void palindrome_check(Palindrome &list);
};

// slice function with reverse order of element pushing
// Returns object from the function
Palindrome Palindrome ::slice(Palindrome &list1)
{
    int size = SIZE;
    Palindrome list2;
    Node *main = list1.head;

    int count = 1;
    while (main != NULL)
    {

        if (count >= (size - (size / 2)) + 1)
        {

            list2.insert_element_head(main->data);
            
        }
        main = main->next;
        count++;
    }

    // returning object
    return list2;
}

//fucntion for palindrome check
void Palindrome ::palindrome_check(Palindrome &list)
{
    Palindrome copied_List;
    copied_List = copied_List.slice(list); // stores the list produce by slice()

    Node *itr_main = list.head;
    Node *itr_sub = copied_List.head;

    while (itr_sub != NULL)
    {

        if (itr_sub->data == itr_main->data) // if two datas are equal then it will move iterators to their next position
        {
            if(itr_sub->next == NULL)// when the upper if() completed it's last check, and it is equal then, it prints palindromic
            {
                cout<<"It is palindromic sequence"<<endl;
                break;
            }
            itr_sub = itr_sub->next;
            itr_main = itr_main->next;
            
            
        }
        else if(itr_sub->data != itr_main->data)
        {
            cout<<"Not palindromic "<<endl;
            break;
        } 
    }
}

int main()
{
    Palindrome list1, list2,list3;
    // palindrome
    list1.insert_element_tail(9);
    list1.insert_element_tail(1);
    list1.insert_element_tail(2);
    list1.insert_element_tail(1);
    list1.insert_element_tail(9);
    // not palindrome
    list2.insert_element_tail(9);
    list2.insert_element_tail(4);
    list2.insert_element_tail(2);
    list2.insert_element_tail(1);
    list2.insert_element_tail(9);

    list3.insert_element_tail(1);
    list3.insert_element_tail(1);
    
    
// taking objects from function and stores to List
// and it is printing the list
    // Palindrome List;
    // List = List.slice(list3);
    // List.display();
    
// CAUTION :  you have to change the SIZE in #define  

    cout<<"Checking for lsit1 :: ";
    list1.palindrome_check(list1);
    NEWLINE
    cout<<"Checking for list2 :: ";
    list2.palindrome_check(list2);
    NEWLINE
    cout<<"Checking for list3 :: ";
    list3.palindrome_check(list3);
    

    return 0;
}