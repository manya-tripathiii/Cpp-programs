#include <iostream>
#include <cstdlib>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}

Node* searchBST(Node* root, int key) {
    if (root == nullptr || root->data == key)
        return root;
    if (key < root->data)
        return searchBST(root->left, key);
    else
        return searchBST(root->right, key);
}

int main() {
    Node* root = createNode(150);
    root->left = createNode(130);
    root->right = createNode(170);
    root->left->left = createNode(120);
    root->left->right = createNode(140);
    root->right->left = createNode(160);
    root->right->right = createNode(180);

    int key = 40;

    if (searchBST(root, key) != nullptr)
        cout << "Element " << key << " found in BST" << endl;
    else
        cout << "Element " << key << " not found in BST" << endl;

    return 0;
}
