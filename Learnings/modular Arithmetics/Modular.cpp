#include <bits/stdc++.h>
#define NEWLINE cout << endl;
using namespace std;

const long M = 1e9 + 7;

/*
    significance of 1e9 + 7 ::
    1. range of integer datatype is close to this number
    2. so we can store final answer in integer we don't have to use long , it is much more optimized way
    3. Multiplicative inverse 
*/

int binaryExponentiation(int a, int b)
{
    //stopping condition
    if (b == 0)
    {
        return 1;
    }

    int res = binaryExponentiation(a,b/2);
    if(b & 1) // if odd then true
    {
        return ( a * ((res * res * 1LL) % M )) % M;  // by writing 1LL the calculations will be done in long long
        // but the result will be stored as int
    }
    else
    {
        return ( res * res * 1LL ) % M;
    }
}

int main()
{

    // Modular Addition
    // Rules for modular addition
    /*
        (a + b) % m = ((a % m) + (b % m)) % m
    */

    // Modular substraction
    // Rules for modular substraction
    /*
        (a - b) % m = ((a % m) - (b % m)) % m
    */

    // Modular multiplication
    // Rules for modular multiplication
    /*
        (a * b) % m = ((a % m) * (b % m)) % m
    */

    // Modular division
    //  It is not like addition, substraction or multiplication
    /*
        (a/b) % m = ( a * ( inverse of b if exists)) % m
    */

    // Binary Exponentiation
    // we know that double datatype can store wide range of numbers but it can't store that
    // accurately
    // as pow(a,b) -> returns double --> so it's better not using pow() for higher values

    /*
        if we are finding 2^16
        for(int i=0;i<16;i++)
        {
            ans *= 2 ;
        }
        O(n) complexity

        but we can resolve this in O(log(b)) where a^b (b = power)
        by using binary exponentiation

        to find 2^16
        2^16-> 2^8 * 2^8
        2^8 -> 2^4 * 2^4
        2^4 -> 2^2 * 2^2
        2^2 -> 2^1 * 2^1

        so we can find it in just 4 steps

        similarly in odd power

        to find 2^13
        2^13 -> 2 * 2^6 * 2^6
        2^6 -> 2^3 * 2^3
        2^3 -> 2 * 2^1
        2^1 -> 2 * 2^0

    */

    // recursive solution for binary exponentiation

    return 0;
}