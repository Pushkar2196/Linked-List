/*
1.Delete a Linked List node at a given position
2.Delete a Linked List node of the given value
*/
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

void Print(struct node* head){
      while(head!=NULL){
            printf("%d ",head->data);
            head=head->next;
      }
      printf("\n");
}
//delete a node with a value equal to data
void delete(struct node** head,int data){
      struct node* temp=*head,*prev;
      //struct node* prev=NULL;
      while(temp->data!=data){
            prev=temp;
            temp=temp->next;
      }
      if(temp==*head){
            *head=temp->next;
      }z
      else{
            prev->next=temp->next;
      }
      free(temp);
}
//delete a node with specific position
void del(struct node** head,int pos){
      struct node* temp=*head,*prev;
      int point=1;
      while(temp!=NULL && point!=pos){
            prev=temp;
            temp=temp->next;
            point++;
      }
      if(pos==1){
            *head=temp->next;
      }
      else if(pos==point){
            prev->next=temp->next;
      }
}

int main(){
      int n;
      struct node* head=NULL;
      insert(&head,1);
      insert(&head,2);
      insert(&head,3);
      insert(&head,4);
      delete(&head,3);
      Print(head);
      del(&head,1);
      Print(head);

}
