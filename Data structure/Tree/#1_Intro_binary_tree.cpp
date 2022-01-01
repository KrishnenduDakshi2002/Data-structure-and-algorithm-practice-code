/*

|                   (7) root  -----> depth 0
|                   /  |  \
|                  /   |   \
|                (8)  (2)   (11)  ----> depth 1
|                / \            \
|               /   \            \
|              (1)  (4)           (5) ---> depth 2



    Terminology::

    1.Root -> that node which don't have any parent
    2. child node -> which have parent
    3. leaf node/External node -> Node that don't have any child { 1,4,5}
    4.internal node -> node with atleast one child
    5. Depth of tree -> no of edges from root to node
    6. Height of tree -> no of edges from node to deepest leaf
|           for node 7 it's height is 2


    Conditions has to be followed for a binary tree

    1. Exactly one root
    2. At most 2 children per node
    3. Only one path from one node to another node


    NOTE:
        1. Empty tree(which has no node in it) -> considered as binary tree
        2. One single node is also considered as binary tree
    
    
    
    The following are the applications of trees:

        Storing naturally hierarchical data: 
        
        >>>>Trees are used to store the data in the hierarchical structure. For example, the file system. The file system stored on the disc drive, the file and folder are in the form of the naturally hierarchical data and stored in the form of trees.
        
        Organize data: 
        
        >>>It is used to organize data for efficient insertion, deletion and    searching. For example, a binary tree has a logN time for searching an element.

        Trie: 
        
        >>>It is a special kind of tree that is used to store the dictionary. It is a fast and efficient way for dynamic spell checking.
        
        Heap: 
        
        >>>It is also a tree data structure implemented using arrays. It is used to implement priority queues.
        
        B-Tree and B+Tree: 
        
        >>>B-Tree and B+Tree are the tree data structures used to implement indexing in databases.
        
        Routing table: 
        
        >>>The tree data structure is also used to store the data in routing tables in the routers.
    
    
    Types of different tree datastructure::

        1. General tree
        2. Binary tree (each node can have atmost two children)
        3. Binary search tree (each node should have atmost two children and values less than node value goes to left and values greater than node value goes to right of that node)
        4. AVL tree (self balancing)(balance itself using single or double rotation)
        5. Red black tree (self balancing)
        6. splay tree (self balancing)
        7. treap (tree + heap)
        8. B-tree
    */