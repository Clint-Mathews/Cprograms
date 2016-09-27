#include<stdio.h>
void main()
{int tp,c,n,b,m,ch,i,t,j,k,s[500],a[50],y;
void print()
{
printf("\n STACKS:");
b=0;
for(i=0;i<n;i++){printf("\n");
for(j=b;j<a[i]+b;j++){printf("%d\t",s[j]);
}
b=b+50;
}
}
printf("\n Enter No of stacks: ");
scanf("%d",&n);
b=0;
for(i=0;i<n;i++)
{
printf("\n Enter elements of stack %d",i+1);
printf("\n Enter number of elements of stack: ");
scanf("%d",&a[i]);
for(j=b;j<a[i]+b;j++)
{
printf("\n Enter Element: ");
scanf("%d",&s[j]);
}
b=b+50;
}
print();
m=0;
while(m==0){
printf("\n STACK OPERATIONS: \n 1 INSERTION \n 2 DELETION \n 3 EXIT \n ENTER YOUR CHOICE: ");
scanf("%d",&c);
if(c==1){
printf("\n INSERTION: \n INSERTION IN ANY STACK");
printf("\n Enter the stack no for insertion: ");
scanf("%d",&y);
if(y<=0||y>n){printf("Wrong input");}
else{
y--;
b=0;
for(i=0;i<y;i++)
{
b=b+50;
}
printf("\n Enter value to be inserted: ");
scanf("%d",&t);
tp=b+a[y];
s[tp]=t;
a[y]++;
}
print();}
else if(c==2){
printf("\n DELETION: \n DELETION IN ANY STACK");
printf("\n Enter the stack no for Deletion: ");
scanf("%d",&y);
if(y<=0||y>n){printf("Wrong input");}
else{
b=0;
y--;
for(i=0;i<y;i++)
{
b=b+50;
}
a[y]--;
}
print();}
else if(c==3){m++;}
else{printf("\n Wrong Choice");}
}
}

