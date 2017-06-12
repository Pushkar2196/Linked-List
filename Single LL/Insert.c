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
//print the content of linked list
void prev_node(struct node** href){
      
}

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
}
