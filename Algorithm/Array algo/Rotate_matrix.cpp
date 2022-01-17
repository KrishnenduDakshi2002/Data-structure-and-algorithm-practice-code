/*
    Input
1    2    3
4    5    6
7    8    9

Output:
4    1    2
7    5    3
8    9    6

For 4*4 matrix
Input:
1    2    3    4    
5    6    7    8
9    10   11   12
13   14   15   16

Output:
5    1    2    3
9    10   6    4
13   11   7    8
14   15   16   12

*/

#include <bits/stdc++.h>
#define NEWLINE cout << endl;
using namespace std;
const int row = 5, col = 4;
void rotateMatrix(int lefttopMostRowindex, int lefttopMostColIndex, int rightbottomMostRowindex, int rightbottomMostColindex, int mat[row][col])
{
    //base case
    if((rightbottomMostRowindex < lefttopMostRowindex) || (rightbottomMostColindex < lefttopMostColIndex))
    {
        return;
    }

    int pre = mat[lefttopMostRowindex][lefttopMostColIndex];
    int curr;
    //first row
    for(int c=lefttopMostColIndex+1;c<=rightbottomMostColindex;c++ )
    {
        int r = lefttopMostRowindex;
        curr = mat[r][c];
        mat[r][c]= pre;
        pre = curr;
    }
    //last column
    for(int r = lefttopMostRowindex+1;r<=rightbottomMostRowindex;r++)
    {
        int c = rightbottomMostColindex;
        pre = curr;
        curr = mat[r][c];
        mat[r][c]= pre;
    }
    //last row
    for(int c=rightbottomMostColindex-1;c>=lefttopMostColIndex;c--)
    {
        int r = rightbottomMostRowindex;
        pre = curr;
        curr= mat[r][c];
        mat[r][c]=pre;
    }
    //first col
    for(int r= rightbottomMostRowindex-1;r>=lefttopMostRowindex;r--)
    {
        int c = lefttopMostColIndex;
        pre = curr;
        curr= mat[r][c];
        mat[r][c]=pre;
    }
    rotateMatrix(lefttopMostRowindex+1,lefttopMostColIndex+1,rightbottomMostRowindex-1,rightbottomMostColindex-1,mat);

}

void printMatrix(int mat[row][col])
{
    for(int r = 0;r<row;r++)
    {
        for(int c = 0;c<col;c++)
        {
            cout<<mat[r][c]<<"   ";
        }
        NEWLINE
        NEWLINE
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int mat[row][col] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16},{17, 18, 19, 20}};
    printMatrix(mat);
    NEWLINE
    rotateMatrix(0,0,4,3,mat);
    // cout<<mat[1][1];
    printMatrix(mat);
    return 0;
}