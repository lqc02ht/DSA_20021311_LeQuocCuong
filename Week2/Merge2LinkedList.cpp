#include<iostream>

using namespace std;

struct node {
    int data;
    node *next;
 };

node* MergeLinkedList(node *headA, node* headB)
{
    if(headA == NULL)
        return headB;
    else if(headB == NULL)
        return headA;
    else {
        if(headA -> data <= headB -> data) {
            headA -> next = MergeLinkedList(headA -> next, headB);
            return headA;
        } else {
            headB -> next = MergeLinkedList(headA, headB -> next);
            return headB;
        }
    }
}

int main() {

    return 0;
}



