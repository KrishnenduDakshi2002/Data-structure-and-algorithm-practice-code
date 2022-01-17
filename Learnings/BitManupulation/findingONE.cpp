
#include <bits/stdc++.h>
#define NEWLINE cout<<endl;
using namespace std;
int numSetBits(unsigned int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int count = 0;
    if(A==0) return 0;
    else if(A==1 || A==2)
    {
        return 1;
    }
    
    for(int i=0;i<log2(A)-1;i++)
    {
        int n = (A & (1 << i));
        if(n!=0)
        {
            count++;
        }
    }
    
    return count+1;
}




int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout<<numSetBits(4294967295);

    
    return 0;
}