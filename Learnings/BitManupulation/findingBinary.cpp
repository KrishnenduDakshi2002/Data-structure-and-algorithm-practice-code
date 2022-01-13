#include <bits/stdc++.h>
#define NEWLINE cout << endl;
using namespace std;

// for a binary number n -> (no of bits  log2(n)+1)
// for a decimal number n -> (no of digits  log10(n)+1)

int main()
{
    while (true)
    {
        int n;
        cin >> n;

        for (int i = log2(n); i >= 0; i--)
        {
            cout << ((n & (1 << i)) >> i);
        }
        NEWLINE
    }
    return 0;
}