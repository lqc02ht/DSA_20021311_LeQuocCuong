#include<iostream>

using namespace std;

struct node {
    int data;
    node *next;
 };

void printLinkedList(node* head)
{
    while (head != NULL) {
        cout << head -> data << '\n';
        head = head -> next;
    }
}

int main() {

    return 0;
}
