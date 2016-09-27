#include<stdio.h>
#include<stdlib.h>
main()
{
struct polyadd
{
int coeff;
int exp;
struct polyadd *next;
}*a,*b;
int n,m;
struct polyadd *cur1,*cur3,*cur2,*a1,*b1,*c1,*c;
c1=(struct polyadd*)malloc(sizeof(struct polyadd));
cur3=(struct polyadd*)malloc(sizeof(struct polyadd));
c1->coeff=0;
c1->exp=0;
c1->next=NULL;
cur3=c1;
printf("\n Enter degree of 1st polynomial: ");
scanf("%d",&n);
printf("\n Enter degree of 2nd polynomial: ");
scanf("%d",&m);
cur1=(struct polyadd*)malloc(sizeof(struct polyadd));
cur2=(struct polyadd*)malloc(sizeof(struct polyadd));
a1=(struct polyadd*)malloc(sizeof(struct polyadd));
b1=(struct polyadd*)malloc(sizeof(struct polyadd));
int i,g,h;
a1->coeff=0;
a1->exp=0;
a1->next=NULL;
cur1=a1;
b1->coeff=0;
b1->exp=0;
b1->next=NULL;
cur2=b1;
for(i=n;i>=0;i--)
{
a=(struct polyadd*)malloc(sizeof(struct polyadd));
cur1->next=a;
printf("\n Enter %d degree Coefficent of 1st polynomial:",i);
scanf("%d",&g);
a->coeff=g;
a->exp=i;
a->next=NULL;
cur1=a;
}
for(i=m;i>=0;i--)
{
b=(struct polyadd*)malloc(sizeof(struct polyadd));
cur2->next=b;
printf("\n Enter %d degree Coefficent of 2nd polynomial:",i);
scanf("%d",&g);
b->coeff=g;
b->exp=i;
b->next=NULL;
cur2=b;
}
c=(struct polyadd*)malloc(sizeof(struct polyadd));
cur3->next=c;
cur3=c;
cur1=a->start;
cur2=b->start;
int s,p;
while(cur1!=NULL&&cur2!=NULL)
{
switch(compare(p->exp,q->exp)){
case '=':s=p->coeff+q->coeff;
	 if(s!=0){}
}
}
}
