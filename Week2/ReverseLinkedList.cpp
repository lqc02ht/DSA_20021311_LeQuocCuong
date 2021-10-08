#include<iostream>

using namespace std;

struct node {
    int data;
    node *next;
 };

node* Reverse(node *head)
{
    if(head -> next == NULL || head == NULL)
        return head;
    else {
        node *temp = Reverse(head -> next);
        (head -> next) -> next = head;
        head -> next = NULL;
        return temp;
    }
}

int main() {

    return 0;
}


