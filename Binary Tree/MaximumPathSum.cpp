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

int height(Node *root, int& sum){
    if(root == nullptr){
        return 0;
    }

    int leftHeight = height(root->left,sum);
    int rightHeight = height(root -> right, sum);

    sum = max(sum,root->data+leftHeight+rightHeight);

    return root -> data + max(leftHeight,rightHeight);
}

int maximumPathSum(Node *root){
    int result = INT_MIN;
    height(root,result);
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

    cout << "The maximum path sum of a given tree is : " << maximumPathSum(root) << endl;

    return 0;
}
