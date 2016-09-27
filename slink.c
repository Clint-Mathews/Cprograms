NAME                                             :CLINT MATHEWS
CLASS                                            :S3 R
ROLL NO                                        :22
AIM                                                 :INSERTION AND DELETION IN A                						     SINGLY LINKED LIST

#include<stdio.h>
#include<stdlib.h>
main()
{
struct node
{
int info; 
struct node *next;
}*c;
struct node *cur,*prev,*f,*s,*ins; 
int n,v,i,j;
printf("\n Enter your first node :");
f=(struct node*)malloc(sizeof(struct node));
printf("\n Enter value to node:");
scanf("%d",&f->info);
s=f;
cur=s;
printf("\n Enter No: of nodes: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{c=(struct node*)malloc(sizeof(struct node));
printf("\n Enter value to node: ");
scanf("%d",&v);
c->info=v;
cur->next=c;
c->next=NULL;
cur=c;
}
prev=cur;
printf("\n Entered Link list");
do{
prev=cur;
printf("%d \t",cur->info);
cur=cur->next;
}while(prev->next!=NULL);
int ch1,ch2,z,x;
z=0;
x=0;
cur=s;
j=0;
 while(j==0){
z=0;
x=0;
printf("\n 1 INSERTION \n2 DELETION \n 3 Exit ");
printf("\n Enter your choice: ");
scanf("%d",&ch1);
if(ch1==1)
{
while(z==0){
printf("\n ******************INSERTION**************************");
printf("\n 1 Insertion at begining \n 2 Insertion at End \n 3 Insertion at any position \n 4 Exit \n   Enter your choice: ");
scanf("%d",&ch2);
ins=(struct node*)malloc(sizeof(struct node));
//printf("\n Enter the info to node to be inserted: ");
//scanf("%d",&ins->info);
cur=s;
if(ch2==1){
printf("\n Enter the info to node to be inserted: ");
scanf("%d",&ins->info);
ins->next=s;
s=ins;
cur=s;
printf("\n Link list after insertion");
do{
prev=cur;
printf("%d \t",cur->info);
cur=cur->next;
}while(prev->next!=NULL);
}
else if(ch2==2){
cur=s;
printf("\n Enter the info to node to be inserted: ");
scanf("%d",&ins->info);
while(cur->next!=NULL){
cur=cur->next;}
cur->next=ins;
ins->next=NULL;
cur=s;
printf("\n Link list after insertion");
do{
prev=cur;
printf("%d \t",cur->info);
cur=cur->next;
}while(prev->next!=NULL);
}
else if(ch2==3){
cur=s;
int g;
printf("\n Enter the info to node to be inserted: ");
scanf("%d",&ins->info);
printf("\n Enter value after which node is to be inserted:");
scanf("%d",&g);
while(cur->info!=g)
{
cur=cur->next;
}
ins->next=cur->next;
cur->next=ins;
cur=s;
printf("\n Link list after insertion");
do{
prev=cur;
printf("%d \t",cur->info);
cur=cur->next;
}while(prev->next!=NULL);
}
else if(ch2==4){++z;}
else{printf("\n Entered choice is wrong");}
}}
else if(ch1==2)
{
while(x==0){
printf("\n ******************DELETION************");
printf("\n 1 Deletion at begining \n 2 DEletion at end \n 3 Deletion at positon \n 4 Exit \n Enter your choice:");
int y;
scanf("%d",&y);
if(y==1){
s=s->next;
cur=s;
printf("\n Link list after deletion");
do{
prev=cur;
printf("%d \t",cur->info);
cur=cur->next;
}while(prev->next!=NULL);
}
else if(y==2){
cur=s;
while(cur->next!=NULL){
prev=cur;
cur=cur->next;
}
prev->next=NULL;
cur=s;
printf("\n Link list after Deletion");
do{
prev=cur;
printf("%d \t",cur->info);
cur=cur->next;
}while(prev->next!=NULL);
}
else if(y==3){
cur=s;
int k;
printf("\n Enter the value node to be deleted:");
scanf("%d",&k);
while(cur->info!=k){
prev=cur;
cur=cur->next;
}
prev->next=cur->next;
cur=s;
printf("\n Link list after Deletion");
do{
prev=cur;
printf("%d \t",cur->info);
cur=cur->next;
}while(prev->next!=NULL);
}
else if(y==4){x++;}
else{
printf("\n Wrong Choice ");
}
}}
else if(ch1==3){j++;}
else
{
printf("\n Worong choice ");
}
}
}
