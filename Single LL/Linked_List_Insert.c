#include<stdio.h>
#include <stdlib.h>

struct node{
      int data;
      struct node* next;
};
//insert at the beginning of the linked list
void insert(struct node** href,int data){
      struct node* temp=(struct node*)malloc(sizeof(struct node));
      temp->data=data;
      temp->next=(*href);
      (*href)=temp;
}
/* Given a node prev_node, insert a new node after the given
   prev_node */
void prev_node(struct node* href,int data){
      struct node* new_node=(struct node*)malloc(sizeof(struct node));
      new_node->data=data;
      new_node->next=href->next;
      href->next=new_node;
}
//inserting at the last node of the linked list by passing the header pointer and the data value.
void last_node(struct node* head,int data){
      while(head->next!=NULL){
            head=head->next;
      }
      struct node* temp=(struct node*)malloc(sizeof(struct node));
      temp->data=data;
      head->next=temp;
}
//print the content of linked list
void Print(struct node* head){
      while(head!=NULL){
            printf("%d ",head->data);
            head=head->next;
      }
      printf("\n");
}

int main(){
      int n;
      struct node* head=NULL;

      insert(&head,1);
      insert(&head,2);
      insert(&head,3);
      insert(&head,4);
      Print(head);
      prev_node(head,5);
      Print(head);
      last_node(head,9);
      Print(head);
}
