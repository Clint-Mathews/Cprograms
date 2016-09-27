#include<stdio.h>
main()
{
int h,k,q,f,l[10],t[10],u;
int i,j,x,s,m=0;
int n;
int a[100],ch;
j=0;
f=0;
printf("\n Enter order of array:");
scanf("%d",&n);
for(i=0;i<n;i++){
printf("\n Enter Elements of array:");
scanf("%d",&a[i]);
}
while(m==0){
printf("\n\n 1 Insertion to an array \n 2 Search for an element \n 3 Deleteion of element from array \n 4 Exit \n Enter Your choice:");
scanf("%d",&ch);
if(ch==1){
printf("\n Array before insertion");
for(i=0;i<n;i++){printf("%d\n",a[i]);}
printf("\n Enter index for insertion:");
scanf("%d",&s);
s=s-1;
printf("\n Enter Element for insertion: ");
scanf("%d",&x);
if(s>n||s<1){printf("\n Invalid index");
}
else{
n=n+1;
for(i=n;i>s;i--)
{
a[i]=a[i-1];
}
a[s]=x;
}
printf("\n Insertion Successfull");
printf("\n Array After insertion:");
for(i=0;i<n;i++){
printf("%d\n",a[i]);
}
}
else if(ch==2){
printf("\n Enter Element to be searched: ");
scanf("%d",&u);
for(i=0;i<n;i++){
if(a[i]==u)
{
l[j]=i;
f++;
j++;
}
}
if(f==0){printf("\n Search Unsucessfull");}
else{printf("\n Search Sucessfull");
printf("\n %d was %d times found at index ",u,f);
for(i=0;i<j;i++){printf("%d\t",l[i]+1);}
}
}
else if(ch==3)
{
for(i=0;i<10;i++){}
a[i]=0;
printf("\n Enter the element to be deleted");
scanf("%d",&q);
int cnt,y,p;
h=0;
cnt=0;
for(i=0;i<n;i++){if(a[i]==q){cnt++;}}
while(cnt>0)
{j=0;
y=0;
for(i=0;i<n;i++)
{
if(a[i]==q){p=i;
break;
}
}
for(i=p;i<n;i++){
a[i]=a[i+1];
}
cnt--;
n--;
}
printf("\n Array after deletion:");
for(i=0;i<n;i++){printf("%d\t",a[i]);}
}
else if(ch==4){m=1;}
else{printf("\n Invalid Choice");}
}
}
