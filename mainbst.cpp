#include <iostream>
#include "bst.h"

using namespace std;

int main(int argc, char *argv[])
{
    BST t1, t2;

    t1.insert(4);
    t1.insert(2);
    t1.insert(6);
    t1.insert(1);
    t1.insert(3);
    t1.insert(5);
    t1.insert(7);

    t2.insert(1);
    t2.insert(2);
    t2.insert(3);
    t2.insert(4);
    t2.insert(5);
    t2.insert(6);
    t2.insert(7);

    cout << "In Order Traversal" << endl;
    t1.in();
    t2.in();

    cout << "\nPre Order Traversal" << endl;
    t1.pre();
    t2.pre();

    cout << "\nPost Order Traversal" << endl;
    t1.post();
    t2.post();

    if (t1.isBalanced())
    {
        cout << "\nt1 is balanced" << endl;
    }
    else
    {
        cout << "\nt1 is not balanced" << endl;
    }

    if (t2.isBalanced())
    {
        cout << "t2 is balanced" << endl;
    }
    else
    {
        cout << "t2 is not balanced" << endl;
    }

    cout << "\nt1 has a height of " << t1.treeHeight() << endl;
    cout << "t2 has a height of " << t2.treeHeight() << endl;

    cout << "\nIn t1, the node with a value of 4 has a height of " << t1.nodeHeight(4) << endl;
    cout << "In t2, the node with a value of 4 has a height of " << t2.nodeHeight(4) << endl;
}
