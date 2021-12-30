
//https://www.youtube.com/watch?v=6U4K-7fu_4A&list=PLJyECGU9iUoBNsQluF9Y1gGAaUwaXlgvs&index=1&t=1829s

#include <bits/stdc++.h>
#define NEWLINE cout<<endl;
using namespace std;


class node
{
    public:
        int data;
        node * left;
        node * right;

        node(int data)
        {
            this->data = data;
            this->right = NULL;
            this->left = NULL;
            
        }
};


class BinarySearchTree
{
    public:
        node* root;
        BinarySearchTree()
        {
            root= NULL;
        }
        //methods
        bool isEmpty();
        void insert(int data);
        void printPreOrder(node* Node);
        void printinOrder(node* Node);
        void printPostOrder(node* Node);
        void search(node*Node,int data);
        void findMin(node * Node);
        void findMax(node* Node);
        void delete_node(node* Node,int val);

};

bool BinarySearchTree::isEmpty()
{
    if(root==NULL)
        return true;
    else
        return false;
}
void BinarySearchTree::insert(int data)
{
    if(root==NULL) // for the first case where root is NULL
    {
        root = new node(data);
        cout<<"First element is inserted in root"<<endl;
    }
    else // once root has it's data then only else will execute
    {
        node* temp = root; 
        
        // creating a temp pointer which will store the
        // address of a node and traverse through the binarysearch tree, without
        //changing the value of root
        
        node * newnode = new node(data); 
        
        // everytime when the insert() function is
        //called then it will create a new node object
        while (temp!=NULL) // for traversing through the tree
        {
            if(temp->data==data) // to stop dupilcation in tree
            {
                cout<<"[WARNING]: Duplication is not allowed"<<endl;
                return;
            }
            else if((temp->data > data) && (temp->left==NULL))
            {
                temp->left = newnode;  // once new node is added break the while loop
                break;
            }
            else if((temp->data > data) && (temp->left!=NULL))
            {
                temp = temp->left; // if the current node's left part is not NULL, so we can't 
                // add another node, so we traversed 
            }
            else if((temp->data < data) && (temp->right==NULL))
            {
                temp->right = newnode; // once new node is added break the while loop
                break;
            }
            else if((temp->data < data) && (temp->right!=NULL))
            {
                temp = temp->right; // if the current node's left part is not NULL, so we can't 
                // add another node, so we traversed 
            }
        }
        
    }
}
// https://youtu.be/2xb_mw0_-bM  // preorder video //simple snippets
/*
    Tree traversal : Also known as tree search and walking the tree, Visiting(checking or updating )
    each node in a tree data structure, exactly once.

|                           Tree Traversal 
        1.  Depth first search/ traversal(DFS)
        2.  Breadth first search/traversal(BFS)
        
        1.  Depth first search/ traversal(DFS)
            a.  Pre order(NLR) (N-> node(root),L->left child,R->right child)
            b.  In order(LNR)
            c.  post order(LRN)

        2. Breadth first search/traversal(BFS)
            >> here we traversed in level order, where we visit every node on a same depth
        
*/

void BinarySearchTree::printPreOrder(node* Node) // gives the order in which elements were inserted
{
    //stopping condition
    if(Node == NULL)
    {
        return; // what return does is, stop calling this fucntion and play the calling function(in this case is main())
    }
    cout<<Node->data<<" ";
    printPreOrder(Node->left);
    printPreOrder(Node->right);
}

void BinarySearchTree::printinOrder(node* Node) // gives the sorted elements
{
    //left--node--right
    if(Node==NULL)
    {
        return;
    }
    printinOrder(Node->left);
    cout<<Node->data<<" ";
    printinOrder(Node->right);

}

void BinarySearchTree::printPostOrder(node* Node)
{
    //left--right--node
    if(Node ==NULL)
    {
        return;
    }
    printPostOrder(Node->left);
    printPostOrder(Node->right);
    cout<<Node->data<<" ";
}



//Searching for elements in the tree, using traversal method
void BinarySearchTree::search(node* Node,int data)
{   
    if(Node == NULL)
    {
        cout<<"Not found"<<endl;
        return;
    }
    if(data == Node->data)
    {
        cout<<"Element is found"<<endl;
        return;
    }

    if(data < Node->data)
    {
        search(Node->left,data);
    }
    else if(data > Node->data)
    {
        search(Node->right,data);
    }
}


//Finding minvalue and max value in the binary search tree
void BinarySearchTree ::findMin(node* Node)
{
    if(Node==NULL)
    {
        return;
    }
    findMin(Node->left);
    if(Node->left==NULL)
        cout<<"Mnimum value is "<<Node->data<<endl;
}
void BinarySearchTree ::findMax(node* Node)
{
    if(Node==NULL)
    {
        return;
    }
    findMax(Node->right);
    if(Node->right==NULL)
        cout<<"Maximum value is "<<Node->data<<endl;
}

void BinarySearchTree::delete_node(node* Node,int val)
{
    if(Node->data > val)
    {
        if(Node->left==NULL)
        {
            return;
        }
        delete_node(Node->left,val);
        delete_node(Node->right,val);
    }
    
}










int main()
{
    BinarySearchTree bst;
    cout<<bst.isEmpty();
    bst.insert(7);
    bst.insert(5);
    bst.insert(3);
    bst.insert(1);
    bst.insert(2);
    bst.insert(8);
    bst.insert(9);
    bst.insert(11);
    bst.insert(14);

    //bst.insert(0);
   
    bst.printPreOrder(bst.root);
    NEWLINE
    bst.printinOrder(bst.root);
    NEWLINE
    bst.printPostOrder(bst.root);
    NEWLINE
    bst.search(bst.root,0);
    bst.findMin(bst.root);
    bst.findMax(bst.root);
    return 0;
}