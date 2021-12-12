#include <iostream>
#include <list>
#define NEWLINE cout<<endl;
using namespace std;

void show(list<pair<int,string> > listArr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<"Index "<<i<<": ";
        for(list<pair<int,string> >::iterator itr = listArr[i].begin();itr!=listArr[i].end();itr++)
        {
            cout<<itr->second<<"[$"<<itr->first<<"]";
            cout<<" ";
        }
        cout<<endl;
    }
}

int hashKey(int key)
{
    return (key)%10;
}

int main()
{
    int size=10;
    list<pair<int,string> > listArr[size];
    int money[9] = {1222, 2234, 3467, 2132, 4999, 7892, 9855, 3743, 3888};
    string str[9]= {"Ram","sam","krish","Rahul","samal","Arjun","Rama","Sita","Geeta"};

//pushing elements indivisually 
    // listArr[hashKey(money[0])].push_back(make_pair(money[0],str[0]));
    // listArr[hashKey(money[3])].push_back(make_pair(money[3],str[3]));
    
    for(int i=0;i<9;i++)
    {
        listArr[hashKey(money[i])].push_back(make_pair(money[i],str[i]));
    }

    show(listArr,size);
    


    return 0;
}