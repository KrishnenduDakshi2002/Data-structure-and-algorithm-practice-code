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
    
    1.*/