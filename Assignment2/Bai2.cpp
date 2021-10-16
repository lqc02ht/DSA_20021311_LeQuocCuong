#include<iostream>

using namespace std;

struct node {
    int data;
    node* next;
};
node* head;

node* AddTail(int value){
    node* p;
    node* temp = new node();
    temp->data = value;
    temp->next = NULL;
    if(head == NULL){
        head = temp;
    }
    else {
        p =head;
        while(p->next!=NULL) {
            p=p->next;
        }
        p->next=temp;
    }
    return head;
}


node* AddHead(int value){
    node* temp = new node();
    temp->data = value;
    temp->next = NULL;
    if(head == NULL){
        head = temp;
    }else{
        temp->next = head;
        head = temp;
    }
    return head;
}

node* Insert(int position, int value){
    if(position==0||head==NULL)
        head=AddHead(value);
    else {
        int k=1;
        node* p=head;
        while(p!=NULL && k!=position) {
            p = p->next;
            ++k;
        }
        if(k!=position)
            head=AddTail(value);
        else {
            node* temp = new node();
            temp->data = value;
            temp->next = NULL;
            temp->next = p->next;
            p->next = temp;
        }
    }
    return head;
}

node* Delete(int position){
    node* p;
    if(position==0) {
        p=head;
        head=p->next;
        delete p;
        return head;
    }
    for(p=head; position!=1; p=p->next, position--);
    node* temp = p->next;
    p->next = p->next->next;
    delete temp;
    return head;
}

void Print(){
    for(node* p=head; p!=NULL; p=p->next){
        cout<<p->data<<' ';
    }
}

int main()
{
    head=NULL;
    int n;
    cin>>n;
    string s;
    cin.ignore();
    do {
        getline(cin, s);
        if(s[0]=='i') Insert((int)s[7]-48, (int)s[9]-48);
        else if(s[0]=='d') Delete((int)s[7]-48);
        n--;
    } while(n>0);
    Print();
    return 0;
}
