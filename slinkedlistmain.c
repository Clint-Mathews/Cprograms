#include<stdio.h>
#include<stdlib.h>
struct node
{
 int info;
 struct node*next;
}*start;
void main()
{
 int choice,data,i,n,y;
 struct node *cur,*newnode,*ptr,*ptr1;
 void display(int );
 void delet();
 printf("\nENTER NUMBER OF ELEMENTS :");scanf("%d",&n);
 for(i=0;i<n;i++)
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
	 printf("\nENTER ELEMENT %d :",i+1);scanf("%d",&newnode->info);
	 cur->next=newnode;newnode->next=NULL;cur=newnode;
	}
 }
 printf("\n\nLINK LIST INSERTED IS;\n");display(n);
 printf("\n\n");
 do
 {
  printf("OPERATIONS ON LINKED LIST\n");
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
     printf("\nENTER ELEMENT AFTER WHICH\n");scanf("%d",&data);
     while(cur->info!=data && cur!=NULL)
	{
	 cur=cur->next;
	}
     if(cur->info==data)
	{
	 ptr1=cur->next;cur->next=ptr;ptr->next=ptr1;printf("\nNEW LINKED LIST IS;\n");display(n);
	}
     else
        {
         printf("\nELEMENT %d NOT EXIST IN LINKED LIST",data);
        }
   }
  }
  if(choice==2){delet();}
  printf("\nENTER 1 TO CONTINUE");scanf("%d",&y);
 }while(y==1);
}
void display(int n)
{
  struct node *temp;
  temp=start;
  while(temp!=NULL)
        {
         //if(cur=NULL){printf("\n");}
         printf("\t%d",temp->info);
         temp=temp->next;
        }

}
void delet()
{
  
}
