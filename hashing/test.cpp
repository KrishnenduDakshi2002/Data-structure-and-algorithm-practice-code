#include <iostream>
#include <list>
#define NEWLINE cout << endl;
using namespace std;

void display(list<int> lst)
{
    for (list<int>::iterator itr = lst.begin(); itr != lst.end(); itr++)
    {
        cout << *itr << " ";
    }
}

int retrn(int a,int b)
{
    int c =12;
    if((a+b)==c)
    {
        return 1;
    }
    return -1;
}

int main()
{
    // list<int> lst;
    // lst.push_back(12);
    // lst.push_back(19);
    // lst.push_back(11);
    // lst.push_back(16);
    // lst.push_back(14);

    // display(lst);
    // list<int>::iterator itr=lst.begin();
    // lst.erase(itr);
    // NEWLINE
    // display(lst);

    // char C;
    // cin>>C;
    // cout<<int(C);

    int itr = 2;
    while (true)
    {
        string str;
        cin >> str;
        int sum = 0;
        for (int i = 0; i < str.length(); i++)
        {
            sum += int(str[i]);
        }
        cout << sum << endl;
    }

    // cout<<retrn(1,11);
    return 0;
}