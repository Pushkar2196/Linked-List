#include<stdio.h>
#include<stdlib.h>

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
//count total node Recursively
int count_rec(struct node* head){
      if(head==NULL){
            return 0;
      }
      return 1+count_rec(head->next);
}
//count total nodes iteratively
int count(struct node* head){
      int count=0;
      while(head!=NULL){
            head=head->next;
            count++;
      }

      return count;
}

int main(){
      struct node* head=NULL;
      insert(&head,1);
      insert(&head,2);
      insert(&head,3);
      insert(&head,4);
      insert(&head,5);
      printf("%d\n",count_rec(head));

}
