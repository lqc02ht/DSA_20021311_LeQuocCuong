
#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node *left, *right;
};


void printPostorder(Node* node)
{
    if (node == NULL)
        return;
    printPostorder(node->left);
    printPostorder(node->right);
    cout << node->data << " ";
}

void printInorder(Node* node)
{
    if (node == NULL)
        return;
    printInorder(node->left);
    cout << node->data << " ";
    printInorder(node->right);
}

void printPreorder(Node* node)
{
    if (node == NULL)
        return;
    cout << node->data << " ";
    printPreorder(node->left);
    printPreorder(node->right);
}

int height(Node* node)
{
    if (node == NULL)
        return 0;
    else {
        int l = height(node->left);
        int r = height(node->right);
        if (l > r)
            return(l + 1);
        else
            return(r + 1);
    }
}

Node* newNode(int data)
{
    Node *node = new Node();
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return(node);
}

int main()
{
    Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    cout << height(root) << '\n';
    printPreorder(root);
    cout<< '\n';
    printPostorder(root);
    cout<< '\n';
    printInorder(root);
    return 0;
}
