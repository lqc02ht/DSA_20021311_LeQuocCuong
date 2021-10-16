#include<iostream>

using namespace std;

struct node {
    int data;
    node* next;
    node* prev;
};
node* head, *tail;

int countTriplets() {
    node* p1, *p2, *p3;
    int countt=0;
    for(p1=head; p1!=NULL; p1=p1->next)

        for(p2=p1->next; p2!=NULL; p2=p2->next)

            for(p3=p2->next; p3!=NULL; p3=p3->next)

                if((p1->data + p2->data + p3->data)==0) countt ++;
    return countt;
}

void Insert(int x) {

    node* temp= new node();
    temp->data=x;
    temp->next = temp->prev = NULL;
    if(head == NULL) {
        head = temp;
        tail = temp;
        //return;
    }
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void Create() {
    int n, data;
    cin>>n;
    for(int i=1; i<=n; i++) {
        cin>>data;
        Insert(data);
    }
}

int main()
{
    head=NULL;
    Create();
    cout<<countTriplets();
    return 0;
}

