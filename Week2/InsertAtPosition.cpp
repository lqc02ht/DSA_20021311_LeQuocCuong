#include<iostream>

using namespace std;

struct node {
    int data;
    node *next;
 };

node* InsertPosition(node *head, int value, int position)
{
    if(position == 0) {
        node *p = new node();
        p -> data = value;
        p -> next = head;
        return p;
    } else {
        node *p = head;
        for(int i = 1; i < position; i++)
            p = p -> next;
        node *tmp = new node();
        tmp -> data = value;
        tmp -> next = p -> next;
        p -> next = tmp;
        return head;
    }
}

int main() {

    return 0;
}
