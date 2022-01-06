#include <bits/stdc++.h>
#define NEWLINE cout<<endl;
using namespace std;

map<int,int> ms;

int mostsearch()
{
   int max =1;
   
   for(auto itr= ms.begin();itr!=ms.end();itr++)
   {
       if(itr->second > max)
       {
           max = itr->second;
           
       }
   }
   for(auto itr= ms.begin();itr!=ms.end();itr++)
   {
       if(itr->second >= max)
       {
            return itr->first;
       }
   }
    return 0;
}
void search(int key,int keyval)
{
    if(ms.find(key) == ms.end())
    {
        ms.insert({key,keyval});
    }
    else
    {
        auto itr = ms.find(key);
        itr->second = itr->second +1;
    }
}

void print()
{
    for(auto itr= ms.begin();itr!=ms.end();itr++)
   {
       cout<<itr->first<<" "<<itr->second<<endl;
   }

}
int main()
{
    search(12,1);
    search(13,1);
    search(14,1); 
    search(14,1); 
    search(14,1); 
    search(14,1); 
    search(14,1); 
    search(15,1); 
    search(15,1); 
    search(15,1); 
    search(15,1); 
    search(15,1); 

    print();
    NEWLINE
    cout<<mostsearch();
    NEWLINE
    cout<<mostsearch();

    
    return 0;
}