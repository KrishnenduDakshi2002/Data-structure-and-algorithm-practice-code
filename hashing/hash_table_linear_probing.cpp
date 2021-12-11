#include <iostream>
#include <list>
#define NEWLINE cout<<endl;
using namespace std;

class HashTable{
    private:
        static const int hashgroups =10;
        list<pair<string,int> > Hashtable[hashgroups];
    public:
        bool isEmpty() const;
        int hashfunction(string key);
        void insert(string str,int data);
        bool search(string data);
        int int_element(string str);
        void string_element(int str);
        void del(string str);
        void show();
};

bool HashTable::isEmpty() const{
    int sum =0;
    for(int i=0;i<hashgroups;i++)
    {
        sum+= Hashtable[i].size();
    }
    if(sum==0) return false;
    else return true;
}
int HashTable::hashfunction(string key)
{
    int sum=0;
    for(int i=0;i<key.length();i++)
    {
        sum+=int(key[i]);
    }
    return sum%hashgroups;
}

void HashTable::insert(string str,int data)
{
    for(int i=0;i<hashgroups;i++)
    {
        cout<<"running insert"<<i<<endl;
        if(Hashtable[hashfunction(str)].size()==0)
        {
            cout<<"if of insert"<<endl;
            Hashtable[hashfunction(str)].push_back(make_pair(str,data));
            break;
        }
        else
        {
            cout<<"else of insert"<<endl;
            for(int j=1;j<hashgroups;i++)
            {
                int hashkey =0;
                if((hashfunction(str)+j)%hashgroups == (hashfunction(str)+j))
                {
                    hashkey = hashfunction(str)+j;
                }
                else
                {
                    hashkey = (hashfunction(str)+j)%hashgroups;
                }
                
                if(Hashtable[hashkey].size()==0)
                {
                    cout<<"else->if of insert"<<endl;
                    Hashtable[hashkey].push_back(make_pair(str,data));
                    break;
                }
            }
        }
    }

}

void HashTable::show()
{
    for(int i=0;i<hashgroups;i++)
    {
        
        cout<<"Index "<<i<<": ";
        for(list<pair<string,int> >::iterator itr=Hashtable[i].begin();
        itr!=Hashtable[i].end();itr++)
        {
            cout<<itr->first<<"[$"<<itr->second<<"] "<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    HashTable ht;
    ht.insert("sam",1233);
    ht.insert("ram",1233);
    ht.insert("ram",1233);

    ht.show();
    cout<<"end of file"<<endl;
    return 0;
}