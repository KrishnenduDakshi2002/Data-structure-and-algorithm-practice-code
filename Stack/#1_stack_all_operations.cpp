#include <iostream>
#define NEWLINE cout<<endl;
using namespace std;

#define SIZE 100

class stack
{
    int * arr;
    int top;

    public:
            stack()
            {
                arr = new int[SIZE];
                top = 0;
            }

        void push(int x)
        {
            if(top == SIZE)
            {
                cout<<"stack overflowed"<<endl;
                return;
            }

            top++;
            arr[top-1] = x;

        }
// popping one element 
        void pop()
        {
            if(top == 0)
            {
                cout<<"Stack is empty"<<endl;
                return;

            }
            
            top--;
        }
// printing value at top position
        void top_()
        {
            if(top == 0)
            {
                cout<<"Stack is empty"<<endl;
                return;

            }
            cout<<"Value at top position is :"<<arr[top-1]<<endl;
        }

// checking whether our stack is empty or not
        void empty()
        {
            if(top == 0)
            {
                cout<<"Stack is empty"<<endl;
                return;

            }
            else
            {
                cout<<"Element is present in stack"<<endl;
            }
           
        }

};


int main()
{
    stack sk;

    sk.push(10);
    sk.push(20);
    sk.push(30);
    sk.push(40);
    sk.push(50);

    sk.top_();
    sk.pop();
    sk.top_();
    sk.empty();
    return 0;
}