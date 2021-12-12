#include <iostream>
#include <list>
#define NEWLINE cout<<endl;
using namespace std;

class HashTable{
    private:
        static const int hashgroups =11;
        list<pair<string,int> > hashTable[hashgroups];
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
// not empty then->>(1) or empty->>(0)
bool HashTable::isEmpty() const
{
    int sum=0;   //intializing value of sum is 0
    for(int i=0;i<hashgroups;i++)
    {
        sum += hashTable[i].size();
    }
    if(sum==0)
    {
        return false;
    }
    return true;
}
// hashfunction for hash table
int HashTable::hashfunction(string key)
{
    int sum=0;
    for(int i=0;i<key.length();i++)
    {
        sum+=int(key[i]);
    }
    return sum%hashgroups;
}

// here not doing open addressing(like linear probing,quadratic probing)
void HashTable::insert(string str,int data)
{
    
    hashTable[hashfunction(str)].push_back(make_pair(str,data));
    
}

// if element is present then-> (1); not present then->(-1)
bool HashTable::search(string data)
{
    int check=0;
    int hashkey = hashfunction(data);
    for(list<pair<string,int> >::iterator itr= hashTable[hashkey].begin();
    itr!= hashTable[hashkey].end();itr++)
    {
        if(itr->first == data)
        {
            check =1;
        }
        
    }
    if(check==1) return true;
    else return false;

}
//Gives the integer element associated to the input string
int HashTable::int_element(string str)
{
    int data =0;
    int hashkey = hashfunction(str);
    for(list<pair<string,int> >::iterator itr= hashTable[hashkey].begin();
    itr!= hashTable[hashkey].end();itr++)
    {
        if(itr->first == str)
        {
            data = itr->second;
        }
        
    }
    return data;
}
// It will delete that iterator where our element is present
void HashTable::del(string str)
{
    int hashkey = hashfunction(str);
    for(list<pair<string,int> >::iterator itr= hashTable[hashkey].begin();
    itr!= hashTable[hashkey].end();itr++)
    {
        if(itr->first == str)
        {
            hashTable[hashkey].erase(itr);
            break;
        }
    }
}
// Display the array of list
void HashTable::show()
{
    for(int i=0;i<hashgroups;i++)
    {
        cout<<"Index "<<i<<": ";
        for(list<pair<string,int> >::iterator itr=hashTable[i].begin();
        itr!=hashTable[i].end();itr++)
        {
            cout<<itr->first<<"[$"<<itr->second<<"] "<<" ";
        }
        cout<<endl;
    }

}


int main()
{
    HashTable ht;
    ht.insert("ram",2345);
    ht.insert("Sam",3111);
    ht.insert("Sita",5000);
    ht.insert("Geeta",5648);
    ht.insert("Mayuri",4532);
    ht.insert("Mayu",4532);
    ht.insert("Pathak",1235);
    ht.insert("sohan",3456);
    ht.insert("Pritha",9045);
    ht.insert("krishnendu",1896);
    ht.insert("krish",1896);
    ht.insert("suraj",3423);
    ht.insert("Rahul",3432);
    ht.insert("Dip",3432);
    ht.insert("seetal",2342);
    ht.insert("tarun",2342);

    ht.show();
    NEWLINE
    cout<<ht.int_element("seetal")<<endl;
    cout<<ht.search("Dip")<<endl;
    ht.del("krish");
    NEWLINE
    ht.show();
    cout<<ht.isEmpty();
    
    return 0;
}