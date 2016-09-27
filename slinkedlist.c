#include<stdio.h>
#include<stdlib.h>
struct node
{
 int info;
 struct node*next;
}*start;
void main()
{
 int choice,data;
 struct node *cur,*newnode;
 printf("\n");
 do
 {
  if(start==NULL)
	{
	 start=(struct node*)malloc(sizeof(struct node));
	 printf("\nENTER FIRST ELEMENT :");scanf("%d",&start->info);
	 start->next==NULL;cur=start;
	}
  else
	{
	 newnode=(struct node*)malloc(sizeof(struct node));
	 printf("\nENTER DATA :");scanf("%d",&newnode->info);
	 cur->next=newnode;newnode->next=NULL;cur=newnode;
	}
  printf("\nENTER Y YO CONTINUE :");scanf("%d",&choice);
 }while(choice==1);
 printf("\n\nLINK LIST INSERTED IS;\n");
 cur=start;
 while(cur!=NULL)
	{
	 //if(cur=NULL){printf("\n");}
	 printf(" %d",cur->info);
	 cur=cur->next;
	}
 printf("\n\n");
/* printf("OPERATIONS ON LINKED LIST\n");
 printf("1.INSERTION\n2.DELETION\nENTER CHOICE :");scanf("%d",&choice);
 if(choice==1)
 {
  ptr=(struct node*)malloc(sizeof(struct node));
  if(ptr==NULL)
   {
    printf("\nMEMORY IS INSUFFICIENT\n");exit(1);
   }
  else 
   {
    cur=start;
    printf("\nENTER ELEMENT\n");scanf("%d",&data);
    while(cur->info!=data && cur!=NULL)
	{
	 
	
	}
   }
 }*/
}
