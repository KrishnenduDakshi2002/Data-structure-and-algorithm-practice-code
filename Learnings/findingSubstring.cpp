#include <bits/stdc++.h>
#define NEWLINE cout<<endl;
using namespace std;
//https://www.youtube.com/watch?v=OZiTiLDZJ60
int subsequences(string str, string output[])
{
    if(str.length()==0)
    {
        output[0]="";
        return 1;
    }

    int smallerOutputSize = subsequences(str.substr(1),output);

    for(int i=0;i<smallerOutputSize;i++)
    {
        output[smallerOutputSize+i]=str[0]+output[i];
    }
    return 2*smallerOutputSize;
}


int main()
{
    string output[1000];
    string str = "1100101";
    int outPutsize = subsequences(str,output);

    for(int i=0;i<outPutsize;i++)
    {
        cout<<output[i]<<endl;
    }

    return 0;
}