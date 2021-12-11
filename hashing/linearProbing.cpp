#include <iostream>
#include <list>
#define NEWLINE cout << endl;
using namespace std;

class HashTable
{
    static const int hashgroups = 10;
    list<int> hashtable[hashgroups];

public:
    void insert(int data);
    void show();
    int hashfunction(int data);
    void search(int data);
};

int HashTable::hashfunction(int data)
{
    return data % 10;
}


void HashTable::insert(int data)
{

    if (hashtable[hashfunction(data)].size() == 0)
    {
        hashtable[hashfunction(data)].push_back(data);
    }
    else
    {
        for(int i=1;i<hashgroups;i++)
        {
            int hashkey =0;
            // this if and else statement is for hashkey generation for linear probing
            if((hashfunction(data)+i)%hashgroups==hashfunction(data)+i)
            {
                hashkey = hashfunction(data)+i;
            }
            else
            {
                hashkey = (hashfunction(data)+i)%hashgroups;
            }
            
            //this if statement is for pushing elemts to list by indexing
            if(hashtable[hashkey].size()==0)
            {
                hashtable[hashkey].push_back(data);
                break;
            }
            
        }
    }
}

// If element is present in this list-->> then 1; else -->> 0
void HashTable::search(int data)
{
    int check =0;
    if(*(hashtable[hashfunction(data)].begin()) == data )
    {
        check =1;
    }
    else
    {
        for(auto i=1;i<hashgroups;i++)
        {
            auto hashkey =0;
            if((hashfunction(data)+i)%hashgroups==hashfunction(data)+i)
            {
                hashkey = hashfunction(data)+i;
            }
            else
            {
                hashkey = (hashfunction(data)+i)%hashgroups;
            }

            if(*(hashtable[hashkey].begin())==data)
            {
                check = 1;
            }
            
        }
    }
    if(check==1) cout<<"1"<<" [element Found]"<<endl;
    else cout<<"0"<<" [element not Found]"<<endl;
}

void HashTable::show()
{
    for(int i=0;i<hashgroups;i++)
    {
        cout<<"Index "<<i<<": ";
        for(list<int>::iterator itr= hashtable[i].begin();
        itr!=hashtable[i].end();itr++)
        {
            cout<<*itr<<" ";
        }
        cout<<endl;
    }
}

int main()
{

    HashTable ht;
    ht.insert(1);
    ht.insert(11);
    ht.insert(21);
    ht.insert(41);
    ht.insert(51);
    ht.insert(61);
    ht.insert(71);
    ht.insert(81);
    ht.insert(91);
    ht.insert(101);
    ht.insert(111);
    ht.insert(121);

    //ht.show();
    ht.search(41);
    return 0;
}