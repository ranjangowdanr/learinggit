#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};

typedef struct node *NODE;
NODE create(int val)
{
 NODE temp=(NODE)malloc(sizeof(struct node));
 temp->data=val;
 temp->next=NULL;
 }
 NODE sortlist(struct node *head)
 {
  NODE prev=NULL;
  NODE cur=NULL;
  int temp;
  prev=head;
  while(prev!=NULL)
  {
   cur=prev->next;
   while(cur!=NULL)
   {
    if(prev->data>cur->data)
    {
     temp=prev->data;
     prev->data=cur->data;
     cur->data=temp;
     }
     cur=cur->next;
     }
     cur=cur->next;
 }
 
 return head;
 
 }
NODE insert(NODE head,int val)
{
NODE temp=create(val);
 if(head==NULL)
  return temp;
  else
  {
  NODE p=head;
  while(p->next!=NULL){
  p=p->next;
  }
  p->next=temp;
  return head;
  }
  }
  void display(struct node *p)
  {
    while(p!=NULL)
    {
    printf("%d ",p->data);
    p=p->next;
    }
    printf("\n");
  
  
  }
  int main(){
  struct node*first=NULL;
 first= insert(first,50);
 first= insert(first,40);
 first=insert(first,30);
 first=insert(first,20);
  display(first);
  first=sortlist(first);
   display(first);
  return 0;
  }
  
  
  
