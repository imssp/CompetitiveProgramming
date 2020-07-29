/* Tree is recursive data structure which has a root node and some subtrees consisting of more nodes.
-> N nodes tree will have N-1 edges excluding the root node,i.e. they have atleast one incoming link
 ->depth of a node x means: length of path from root to x; or no. of edges in path from root to x
 ->height of a node is the no. of edges in the longest path from x node to the leaf node
 ->height of tree = height of root node
 -> most famous typr of tree is the binary tree: a tree in which a node has atmost 2 children
 -> APPLICATIONS:
    1) storing naturally heirarchical data. eg: file system (file and folder heirarchy)
    2) organising dta for quick search ,insertion , deletion. eg: binary search tree(order of log(n) time for searching an entity)
    3) Trie= for making dictionary, used for dynamic spell checking
    4) Used for network routing algorithm
-> Strict/Proper binary tree: Each node can have either 2 or 0 children
-> Complete binary tree: All levels except possibly the last are completly filled and all nodes are as left as possible
-> Maximum no. of node at level i= 2^i
-> Maximum no. of nodes in a tree with height h= 2^0 +2^1+....+2^h= 2^(h+1)-1= 2^(no. of levels)-1
-> Height of perfect binaary tree with n nodes = log(n+1)base2-1
-> Height of complete binary tree with n nodes= log(n)base2
-> Balanced binary tree:- difference between height of left and right subtree for every node is not more than K(mostly 1)
-> Height of tree with 1 node is 0 and height of an empty tree is -1
-> diff btwn subtree is | h of left subtree- height of right subtee|
-> We would always try to uses a balanced binary tree as we can get the min height possible and also will make it dense
-> We can implement binary tree using:-
   1)dynamically created nodes
   2)arrays: In a complete binary tree , for a node at index i, left child index= 2i+1 & right child index will be = 2i+2 
   
Binary Search Tree
-> is a binary tree in which all nodes in left sub tree are lesser or equal and value of all nodes in right subtree is greater 
*/
