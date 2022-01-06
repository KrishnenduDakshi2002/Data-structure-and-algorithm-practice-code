#include <bits/stdc++.h>
#define NEWLINE cout<<endl;
using namespace std;

class node
{
    public:
        int data;
        int height;
        node* left;
        node* right;

    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
        this->height = 0;
    }
};
class AVL 
{
    public:
        node* root;
        AVL()
        {
            root = NULL;
        }

        node* insertAVL(node* Node,int data);
        void printInorderAVL(node* Node);
        int height(node* Node);
};

node* AVL ::insertAVL(node* Node,int data)
{
    if(root == NULL)
    {
        root = new node(data);
    }
    if(Node == NULL)
    {
        Node = new node(data);
    }
    else if(Node->data > data)
    {
        Node->left = insertAVL(Node->left,data);
    }
    else if(Node->data < data)
    {
        Node->right = insertAVL(Node->right,data);
    }
    return Node;
}
void AVL::printInorderAVL(node* Node)
{
    if (Node == NULL)
    {
        return;
    }
    printInorderAVL(Node->left);
    cout << Node->data << " ";
    printInorderAVL(Node->right);
}

int AVL ::height(node* Node)
{
    if (Node == NULL)
    {
        return -1;
    }
    else
    {
        int left_height = height(Node->left);
        int right_height = height(Node->right);
        if (left_height > right_height)
            return left_height + 1;
        else
            return right_height + 1;
    }
}

int main()
{
    AVL bst;
    bst.insertAVL(bst.root,7);
    bst.insertAVL(bst.root,8);
    bst.printInorderAVL(bst.root);
    NEWLINE
    cout<<bst.height(bst.root);


    


    return 0;
}