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

int balance(Node *root){
    if(root == nullptr){
        return 0;
    }

    int leftHeight = balance(root -> left);
    int rightHeight = balance(root -> right);

    if(leftHeight == -1 || rightHeight == -1){
        return -1;
    }

    if(abs(leftHeight - rightHeight) > 1){
        return -1;
    }

    return 1 + max(leftHeight,rightHeight);
}

bool balanceBinaryTree(Node *root){
    return balance(root) != -1;
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

    cout << "Check the tree is balanced or not: " << balanceBinaryTree(root) << endl;

    return 0;
}
