#include<iostream>

using namespace std;

struct node {
    int data;
    node *next;
 };

node* Delete(node *head, int position)
{
    if(position == 0) {
        return head -> next;
    } else {
        node *p = head;
        for(int i = 1; i < position; i++)
            p = p -> next;
        p -> next = p -> next -> next;
        return head;
    }
}

int main() {

    return 0;
}

