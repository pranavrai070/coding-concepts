#include <iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
};

void traversalLinkedlist(struct Node*ptr)
{
    while(ptr!=NULL)
    {
        cout<<"Elements: "<<ptr->data<<endl;
        ptr=ptr->next;
    }
}

int length(struct Node*head){
    struct Node *ptr=head;
    int count=0;
    while(ptr!=NULL){
        ptr=ptr->next;
        count++;  
    }
    return count;
}

void deleteNode(struct Node*head,int n){
    struct Node*temp1=head;
    if(n==1){
        head=temp1->next;
        free(temp1);
        return;
    }
    int i;
    for(i=0;i<n-2;i++)
        temp1=temp1->next;
    struct Node*temp2=temp1->next;
    temp1->next=temp2->next;
    free(temp2); 
}


struct Node*insertAtFirst(struct Node *head, int data){
    struct Node *ptro=(struct Node*)malloc(sizeof(struct Node));
    ptro->data=data;
    ptro->next=head;
    return ptro;
};

struct Node*insertAtEnd(struct Node*head,int data){
    struct Node*ptro=(struct Node*)malloc(sizeof(struct Node));
    ptro->data=data;
    struct Node*p=head;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=ptro;
    ptro->next=NULL;
    return head;
};

struct Node*insertAtIndex(struct Node*head,int data,int index){
    struct Node*ptro=(struct Node*)malloc(sizeof(struct Node));
    
    struct Node*p=head;
    int i=0;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    ptro->data=data;
    ptro->next=p->next;
    p->next=ptro;
    return head;
};

struct Node*insertAfterNode(struct Node*head, struct Node*prevNode,int data){
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

struct Node*deleteAtIndex(struct Node*head,int index){
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

struct Node*deleteAtLast(struct Node*head){
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

struct Node*deleteByValue(struct Node*head,int value){
    struct Node*p=head;
    struct Node*q=head->next;
    while(q->data!=value && q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    if(q->data==value){
        p->next=q->next;
        free(q);
    }
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

    head->data=4;
    head->next=second;

    second->data=6;
    second->next=third;

    third->data=8;
    third->next=fourth;

    fourth->data=10;
    fourth->next=NULL;
    cout<<"Linked List Before Insertion"<<endl;
    traversalLinkedlist(head);
    cout<<"Length of Linked List is "<<length(head)<<endl;
    cout<<endl;
    cout<<"Linked List After Insertion"<<endl;
    // head=insertAtFirst(head,56);
    // head=insertAtEnd(head,45);
    head=insertAtIndex(head,45,3);
    // head=insertAfterNode(head,second,123);
    traversalLinkedlist(head);
    cout<<"Length of Linked List is "<<length(head)<<endl;

    // deleteNode(head,3);
    // head=deleteFirst(head);
    // head=deleteAtIndex(head,4);
    // head=deleteAtLast(head);
    head=deleteByValue(head,6);
    cout<<"Linked List after Deletion "<<endl;
    traversalLinkedlist(head);
    cout<<"Length of Linked List is "<<length(head)<<endl;

    

    return 0;
}