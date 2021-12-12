#include <iostream>
#include <stack>
#include <string>
#define NEWLINE cout<<endl;
using namespace std;

void reverse_sentence(string s)
{
    stack<string> st;

    for (int i = 0; i <s.length(); i++)
    {
        string word = "";
        while(s[i] != ' ' && i<s.length())
        {
            word += s[i];
            i++;
        }
        st.push(word);
    }

    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();

    }
    cout<<endl;
    
}



int main()
{
    string str = " I am krishnendu";

    reverse_sentence(str);
    return 0;
}