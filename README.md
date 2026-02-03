# CSC310_A0-BST_Review

### List of all BST methods
* BST();
* void in();
* void pre();
* void post();
* void insert(int val);
* void remove(int val);
* bool search(int val);
* int treeHeight();
* int nodeHeight(int val);
* bool isBalanced();

### Create a BST by doing the following
* BST t;

*If needed, these methods will throw an error if the tree is empty*

### Print the tree out using the three forms of traversal
* t.in();
* t.pre();
* t.post();

### Insert into the tree by doing the following
* t.insert(1);

### Remove from the tree by doing the following
* t.remove(1);

### Search for a number within the tree by doing the following
* t.search(1);

### Find the height of the tree by doing the following
* t.treeHeight();

*Note: if the tree only has 1 node, the root, the height will be 0*

### Find the height of a node by doing the following
* t.nodeHeight(1);

*Note: this method searched for the given value and returns the height of that node in the tree*
*Note: if the node is found at the root, the height will be 0*
*Note: if the tree is not empty, but the given value is not in the tree, the mehthod will return -1*

### Find if the tree is balanced by doing the following
* t.isBalanced();

*Note: this will return true if the left and right subtrees have a height within 1 of each other*