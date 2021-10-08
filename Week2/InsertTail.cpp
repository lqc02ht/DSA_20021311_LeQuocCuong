#include<iostream>

using namespace std;

struct node {
    int data;
    node *next;
 };

node* InsertTail(node *head, int value)
{
    node *p = new node();
    p -> data = value;
    p -> next = NULL;
    if (head == NULL){
        head = p;
    } else {
        node *tmp = head;
        while(tmp -> next != NULL) {
            tmp = tmp -> next;
        }
        tmp -> next = p;
    }
    return head;
}

int main() {

    return 0;
}


