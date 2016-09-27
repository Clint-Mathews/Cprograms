#include<stdio.h>
void main()
{
int s[1000],i,n,j,t,k;
k=0;
printf("\n Enter no of elements in stack: ");
scanf("%d",&n);
for(i=0;i<n;i++){printf("\n Enter element: ");scanf("%d",&s[i]);}
while(k==0){
printf("\n Stack:\n");
for(i=n-1;i>=0;i--){printf("%d\n",s[i]);}
printf("\n STACK OPERATIONS: \n 1 PUSH OPERATION \n 2 POP OPERATION \n 3 PEEP OPEARTION \n 4 EXit \n ENTER YOUR CHOICE: ");
scanf("%d",&j);
if(j==1){
printf("\n PUSH OPERATION:");
printf("\n Enter the element to be inputed: ");
scanf("%d",&t);
s[n]=t;
n++;
printf("\n Success");
}
else if(j==2){
printf("\n POOP OPERATION:");
s[n-1]=0;
n--;
printf("\n Success");
}
else if(j==3){
printf("\n PEEP OPERATION:");
printf("\n Top Most Element is: %d",s[n-1]);
}
else if(j==4){k++;}
else{printf("\n Wrong Choice");}
}
} 
