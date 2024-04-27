/*
1. The diameter of a Binary Tree is the longest path between 2 nodes
2. The path doesn't need to pass through the root
*/

#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int key){
        data = key;
        left = nullptr;
        right = nullptr;
    }
};

int diameter(Node *root, int& result){
    if(root == nullptr){
        return 0;
    }
    int leftHeight = diameter(root -> left, result);
    int rightHeight = diameter(root -> right, result);

    result = max(result, leftHeight+rightHeight);

    return 1 + max(leftHeight,rightHeight);
}

int diameterOfTree(Node *root){
    int result = 0;
    diameter(root,result);
    return result;
}


int main(int argc, char const *argv[])
{
    struct Node *root = new Node(1);
    root -> left = new Node(2);
    root -> right = new Node(3);
    root -> left -> left = new Node(4);
    root -> left -> right = new Node(5);
    root -> left -> right -> left = new Node(6);
    root -> right -> left = new Node(7);
    root -> right -> right = new Node(8);
    root -> right -> right -> left = new Node(9);
    root -> right -> right -> right = new Node(10);

    cout << "The diameter of the given binary tree is: " << diameterOfTree(root) << endl;

    return 0;
}
