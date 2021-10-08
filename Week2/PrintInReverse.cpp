#include<iostream>

using namespace std;

struct node {
    int data;
    node *next;
 };

void ReversePrint(node* head)
{
    if(head != NULL) {
        ReversePrint(head -> next);
        cout << head -> data << '\n';
    }
}

int main() {

    return 0;
}

