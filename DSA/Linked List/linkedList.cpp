#include <iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;


struct Node{
   int data;
   struct Node*next;
};

void traversalList(struct Node*ptr)
{
    while(ptr!=NULL)
    {
        cout<<"Elements: "<<ptr->data<<endl;
        ptr=ptr->next;
    }
}

int length(struct Node*head){
    struct Node*ptr=head;
    int count=0;
    while(ptr!=NULL){
        ptr=ptr->next;
        count++;
    }
    return count;
}

//Insert at start
struct Node*insertAtTop(struct Node*head,int data){
    struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    ptr->next=head;
    return ptr;
}

struct Node*insertAtLast(struct Node*head,int data){
    struct Node*ptro=(struct Node*)malloc(sizeof(struct Node));
    ptro->data=data;
    struct Node*p=head;
    
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=ptro;
    ptro->next=NULL;
    return head;
}

struct Node*insertAtIndex(struct Node*head,int data,int index){
    struct Node*ptro=(struct Node*)malloc(sizeof(struct Node));
    struct Node*p=head;
    for(int i=0;i<index-1;i++){
       p=p->next;
    }
    ptro->data=data;
    ptro->next=p->next;
    p->next=ptro;
    return head;
}

struct Node*insertAfterNode(struct Node*head,struct Node*prevNode,int data){
    struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    ptr->next=prevNode->next;
    prevNode->next=ptr;
    return head;
}

struct Node*deleteFirst(struct Node*head){
    struct Node*ptr=head;
    head=head->next;
    free(ptr);
    return head;
}

struct Node*deleteLast(struct Node*head){
    struct Node*p=head;
    struct Node*q=head->next;
    
    while(q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    return head;
}

struct Node*deleteAfterIndex(struct Node*head,int index){
    struct Node*p=head;
    struct Node*q=head->next;
    for(int i=0;i<index-1;i++){
       p=p->next;
       q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;
}




int main(){
    
    struct Node*head;
    struct Node*second;
    struct Node*third;
    struct Node*fourth;

    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    fourth=(struct Node*)malloc(sizeof(struct Node));

    head->data=5;
    head->next=second;

    second->data=9;
    second->next=third;

    third->data=13;
    third->next=fourth;

    fourth->data=16;
    fourth->next=NULL;
    
    cout<<"Linked List at first"<<endl;
    traversalList(head);
    cout<<"Length of the linked list is "<<length(head)<<endl;

    cout<<"Linked List after insertion"<<endl;
    // head=insertAtTop(head,12);
    // head=insertAtLast(head,282);
    // head=insertAtIndex(head,15,2);
    head=insertAfterNode(head,third,345);
    traversalList(head);
    cout<<"Length of the linked list is "<<length(head)<<endl;

    cout<<"Linked List after deletion"<<endl;
    // head=deleteFirst(head);
    // head=deleteLast(head);
    head=deleteAfterNode(head,third);
    traversalList(head);
    cout<<"Length of the linked list is "<<length(head)<<endl;


    return 0;
}