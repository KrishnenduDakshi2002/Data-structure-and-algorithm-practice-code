#include <iostream>
#include <stack>
#define NEWLINE cout<<endl;
using namespace std;

// O(n)
void Reverse_stack(stack<int>  sk)
{
    stack<int> st;
    while(!sk.empty())
    {
        st.push(sk.top());
        sk.pop();
        cout<<st.top()<<" ";
    }
}


//O(1)
void insert_ele_bottom(stack<int> &sk , int ele)
{


}
void reverse_stack(stack<int> &sk)
{
    if(sk.empty())
    {
        return;
    }
    int ele = sk.top();
    sk.pop();
    reverse_stack(sk);
    insert_ele_bottom(sk,ele);
}

int main()
{
    stack<int> stk;
    stk.push(10);
    stk.push(20);
    stk.push(30);
    stk.push(40);
    
    Reverse_stack(stk);
    return 0;
}