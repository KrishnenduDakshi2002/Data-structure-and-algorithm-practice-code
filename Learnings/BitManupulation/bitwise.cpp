
/*
https://www.youtube.com/watch?v=Db8OmMfzwl8
https://youtu.be/h7meukyY_bQ
    
    decimal to binary 
        13 -> if odd -> 1  if  even -> 0
        13/2 -> 6 is even 0
        6/2 ->3 is odd 1
        3/2->1  is odd 1
        if 1 reaches then quit

        13 -> 1101

    XOR -> if there is distint bits then 1 else 0
     1 1 1 0 1 0 1
    ^0 1 1 1 0 0 1

    XOR gives  1 0 0 1 1 0 0

    when using loops instead of doing %,*,/
    we can use bitwise operator to fast the process

    (n << 1) -> n*2
    (n >> 1) -> n/2 

    1s compliment :
    1 1 1 0 1 ->(1s compliment) -> 0 0 0 1 0

    2s compliment :
    1 1 1 0 1 ->(1s compliment) -> 0 0 0 1 0 + 0 0 1(in decimal 1)
    -> 0 0 0 1 1


    IMPORTANT thing to remember :

    1 1 1 0 0
        ^       this 1 is least significant digit

    n & (n-1) - > this operation removes the least significant digit to 0

    1 1 0 0 0
    

        
*/




#include <bits/stdc++.h>
#define NEWLINE cout<<endl;
using namespace std;




int main()
{
    int N = 84;
    int t = log2(N)+1;
    cout<<(int)log2(100000*5)+1;   
    NEWLINE
    cout<<pow(2,19);
    NEWLINE
    int upper_limit = pow(2,t);
    cout<<t<<" "<<upper_limit;
    NEWLINE
    cout<<(70^50);
    NEWLINE
    cout<<(6 << 1);
    return 0;
}