
//https://www.youtube.com/watch?v=6U4K-7fu_4A&list=PLJyECGU9iUoBNsQluF9Y1gGAaUwaXlgvs&index=1&t=1829s

#include <bits/stdc++.h>
#define NEWLINE cout << endl;
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

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
    node *root;
    BinarySearchTree()
    {
        root = NULL;
    }
    //methods
    bool isEmpty();
    void insert(int data);
    void printPreOrder(node *Node);
    void printinOrder(node *Node);
    void printPostOrder(node *Node);
    void printBFS(node *Node);
    void search(node *Node, int data);
    int findMin(node *Node);
    int findMax(node *Node);
    node *delete_node(node *Node, int val);
    int height(node *Node);
    node *deepestNode(node *Node, int height);
    void shortestPath(node *Node, int val1, int val2);
    int mostSearched();
};

bool BinarySearchTree::isEmpty()
{
    if (root == NULL)
        return true;
    else
        return false;
}
void BinarySearchTree::insert(int data)
{
    if (root == NULL) // for the first case where root is NULL
    {
        root = new node(data);
        cout << "First element is inserted in root" << endl;
    }
    else // once root has it's data then only else will execute
    {
        node *temp = root;

        // creating a temp pointer which will store the
        // address of a node and traverse through the binarysearch tree, without
        //changing the value of root

        node *newnode = new node(data);

        // everytime when the insert() function is
        //called then it will create a new node object
        while (temp != NULL) // for traversing through the tree
        {
            if (temp->data == data) // to stop dupilcation in tree
            {
                cout << "[WARNING]: Duplication is not allowed" << endl;
                return;
            }
            else if ((temp->data > data) && (temp->left == NULL))
            {
                temp->left = newnode; // once new node is added break the while loop
                break;
            }
            else if ((temp->data > data) && (temp->left != NULL))
            {
                temp = temp->left; // if the current node's left part is not NULL, so we can't
                // add another node, so we traversed
            }
            else if ((temp->data < data) && (temp->right == NULL))
            {
                temp->right = newnode; // once new node is added break the while loop
                break;
            }
            else if ((temp->data < data) && (temp->right != NULL))
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

void BinarySearchTree::printPreOrder(node *Node) // gives the order in which elements were inserted
{
    //stopping condition
    if (Node == NULL)
    {
        return; // what return does is, stop calling this fucntion and play the calling function(in this case is main())
    }
    cout << Node->data << " ";
    printPreOrder(Node->left);
    printPreOrder(Node->right);
}

void BinarySearchTree::printinOrder(node *Node) // gives the sorted elements
{
    //left--node--right
    if (Node == NULL)
    {
        return;
    }
    printinOrder(Node->left);
    cout << Node->data << " ";
    printinOrder(Node->right);
}

void BinarySearchTree::printPostOrder(node *Node)
{
    //left--right--node
    if (Node == NULL)
    {
        return;
    }
    printPostOrder(Node->left);
    printPostOrder(Node->right);
    cout << Node->data << " ";
}
// Breadth wise printing
void BinarySearchTree::printBFS(node *Node)
{
    node *temp = NULL;
    if (Node == NULL)
    {
        return;
    }

    queue<node *> q;
    q.push(root);

    while (q.size() > 0)
    {
        temp = q.front();
        cout << temp->data << " ";
        q.pop();
        if (temp->left != NULL)
        {
            q.push(temp->left);
        }
        if (temp->right != NULL)
        {
            q.push(temp->right);
        }
    }
}

//Searching for elements in the tree, using traversal method
void BinarySearchTree::search(node *Node, int data)
{
    if (Node == NULL)
    {
        cout << "Not found" << endl;
        return;
    }
    if (data == Node->data)
    {
        cout << "Element is found" << endl;
        return;
    }

    if (data < Node->data)
    {
        search(Node->left, data);
    }
    else if (data > Node->data)
    {
        search(Node->right, data);
    }
}

//Finding minvalue and max value in the binary search tree
/*
    when it was not returning anything from the function
    
    if(Node==NULL)
    {
        return;
    }
    findMin(Node->left);
    if(Node->left==NULL)
        cout<<"Mnimum value is "<<Node->data<<endl;
        
*/
int BinarySearchTree ::findMin(node *Node)
{
    if (Node == NULL)
    {
        cout << "[ERROR]: no element in tree" << endl;
    }
    else if (Node->left == NULL)
    {
        return Node->data;
    }
    return findMin(Node->left);
}
int BinarySearchTree ::findMax(node *Node)
{
    if (Node == NULL)
    {
        cout << "[ERROR]: no element in tree" << endl;
    }
    else if (Node->right == NULL)
    {
        return Node->data;
    }
    return findMax(Node->right);
}
//Deleting node
//https://www.youtube.com/watch?v=zUt2KB2hTQg
/*
|                     (7)
|                   /  |  \
|                  /   |   \
|                (8)  (2)   (11) 
|                / \            \
|               /   \            \
|              (1)  (4)           (5)
*/

// Defining a fucntion to find the node address of minimum value of in the right subtree of a node

// used in the case for deletion of two child node
node *minVal_subtree_right(node *Node)
{
    if (Node->left == NULL)
    {
        return Node;
    }
    return minVal_subtree_right(Node->left);
}
node *BinarySearchTree::delete_node(node *Node, int val)
{
    if (Node == NULL)
    {
        return Node;
    }
    else if (val < Node->data)
    {
        Node->left = delete_node(Node->left, val);
    }
    else if (val > Node->data)
    {
        Node->right = delete_node(Node->right, val);
    }
    else
    {
        //We found our element to be deleted
        // Then we have three cases 1. leaf node 2.one child 3. Two child
        //Actually leaf node deletion is a sub case of one child deletion
        if (Node->left == NULL)
        {
            // if left child is null and right child is present, then we have to link
            // right child to the parent node of this node whose child we are talking about
            // and then we will free this node
            node *temp = Node->right; // when we are dealing with leaf node deletion the temp will store NULL
            free(Node);
            return temp; // temp is consisting the address of the right child, if we return
            // temp then the address stored in temp will be added to the Node's right of the previous
            //function call
            // that's how we are linking right child of this node to previous function call node(grandpa of right child)
        }
        else if (Node->right == NULL)
        {
            node *temp = Node->left;
            free(Node);
            return temp;
        }
        else // two child condition
        {
            // we will find min value from the right sub tree of Node's right child

            //Taking an example::
            /*
                let assume we have to delete 8 
                and assuming that we have reached to the node which contains 8
                
                first, we search for an minimum valued element in the right sub tree of 8 ( which gives 4)
                second, we bring that value 4 and copied to the node->data of that node which we want to del
                    that's mean we replace 8 with 4 and then we delete the leaf node which contains the min 
                    value(in this case 4)
            */
            node *minval_node = minVal_subtree_right(Node); // getting the node address of min value in right
            //subtree of a node
            Node->data = minval_node->data;
            Node->right = delete_node(Node->right, minval_node->data); // deleting that leaf node which contains that
                                                                       //min val for replace
        }
    }
    return Node;
}

//height in integer
int BinarySearchTree::height(node *Node)
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
// this method using queue is really awesome, I can use this in different cases
// and i used this algo in printBFS()
node *BinarySearchTree::deepestNode(node *Node, int height)
{
    node *tmp = NULL;
    if (Node == NULL)
        return NULL;

    // Creating a Queue
    queue<node *> q;
    q.push(root);

    // Iterates until queue become empty
    while (q.size() > 0)
    {
        tmp = q.front();
        q.pop();
        if (tmp->left != NULL)
            q.push(tmp->left);
        if (tmp->right != NULL)
            q.push(tmp->right);
    }
    return tmp;
}

void BinarySearchTree::shortestPath(node *Node, int val1, int val2)
{
    // by me
    if (Node == NULL)
    {
        return;
    }

    deque<node *> deq;
    deq.push_back(root);

    // for val1
    while (deq.size() > 0)
    {
        if (val1 < deq.back()->data)
        {
            deq.push_back(deq.back()->left);
        }
        else if (val1 > deq.back()->data)
        {
            deq.push_back(deq.back()->right);
        }
        else if (val1 == deq.back()->data)
        {
            break;
        }
    }
    //for val2
    while (deq.size() > 0)
    {
        if (val2 == deq.front()->data)
        {
            break;
        }

        if (val2 < deq.front()->data)
        {
            deq.pop_front();
        }
        else if (val2 > deq.front()->data)
        {
            deq.push_front(deq.front()->right);
        }
    }

    //priting deque
    while (deq.size() > 0)
    {
        cout << deq.back()->data;
        deq.pop_back();
        cout << " -> ";
    }
}

int main()
{
    BinarySearchTree bst;
    cout << bst.isEmpty();
    bst.insert(7);
    bst.insert(5);
    bst.insert(3);
    bst.insert(1);
    bst.insert(2);
    bst.insert(8);
    bst.insert(9);
    bst.insert(6);

    //bst.insert(0);

    bst.printPreOrder(bst.root);
    NEWLINE
    bst.printinOrder(bst.root);
    NEWLINE
    bst.printPostOrder(bst.root);
    NEWLINE
    bst.search(bst.root, 0);
    cout << "Minimum value : " << bst.findMin(bst.root);
    NEWLINE
    cout << "Maximum value : " << bst.findMax(bst.root);
    NEWLINE
    //cout<<minVal_subtree_right(bst.root)->data;  // prints 1
    //bst.delete_node(bst.root,7);
    //bst.printinOrder(bst.root);
    cout << "Height is :" << bst.height(bst.root);
    NEWLINE
    cout << bst.deepestNode(bst.root, bst.height(bst.root))->data;
    NEWLINE
    bst.printBFS(bst.root);
    NEWLINE
    bst.shortestPath(bst.root, 2, 9);

    return 0;
}