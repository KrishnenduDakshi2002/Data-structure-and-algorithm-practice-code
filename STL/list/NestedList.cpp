#include <bits/stdc++.h>
#define NEWLINE cout<<endl;
using namespace std;

void print(list<list<int> > l)
{
    cout<<"{   \n";
    for(auto itr = l.begin();itr!=l.end();itr++)
    {
        cout<<"  {";
        
        list<int>:: iterator single_list_itr;
        list<int>& single_list_ptr = *itr;
        for(single_list_itr =  single_list_ptr.begin();single_list_itr!=single_list_ptr.end();single_list_itr++)
        {
            cout<<*single_list_itr<<" ";
        }
    cout<<"}\n";
    }
    cout<<"\n }";
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        list<list<int> > ListofList;
        list<int> singleList;

        for(int i=0;i<N;i++)
        {
            int itr =1;
            while(itr--)
            {
                int num;
                cin>>num;
                singleList.push_back(num);
            }
            ListofList.push_back(singleList);
            singleList.erase(singleList.begin(),singleList.end());
        }
        print(ListofList);
    }
    
    return 0;
}