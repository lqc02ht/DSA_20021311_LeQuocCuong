#include<iostream>

using namespace std;

struct node {
    int data;
    node *next;
 };

node* InsertHead(node *head, int value)
{
    node *tmp = new node();
    tmp -> data = value;
    tmp -> next = head;
    return head = tmp;
}

int main() {

    return 0;
}

