NAME: CLINT MATHEWS
CLASS: S3 R
ROLL NO: 22
AIM: SPARSE MATRIX ADDITION

#include<stdio.h>
main()
{
int r1,r2,c1,c2;
printf("\n Enter order of Matrix 1: ");
scanf("%d%d",&r1,&c1);
printf("\n Enter order of Matrix 2: ");
scanf("%d%d",&r2,&c2);
if(r1==r2&&c1==c2){
printf("\n Enter elements of 1st matrix: ");
int h,i,k,j,y,u[100][3],z[100][100],v[100][3],a[100][3],x[100][100],q[100][100];
u[0][0]=r1;
u[0][1]=c1;
v[0][0]=r2;
v[0][1]=c1;
y=1;
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++){
scanf("%d",&h);
x[i][j]=h;
if(h!=0){
u[y][0]=i;u[y][1]=j;u[y][2]=h;
y++;}}}
u[0][2]=y-1;
printf("\n Enter elements of 2nd matrix: ");
y=1;
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++){
scanf("%d",&h);
q[i][j]=h;
if(h!=0){
v[y][0]=i;v[y][1]=j;v[y][2]=h;
y++;}}}
v[0][2]=y-1;
printf("\n Sparse Matrix Representation of 1st matrix: ");
for(i=0;i<r1;i++){printf("\n");for(j=0;j<c1;j++){printf("%d\t",x[i][j]);}}
printf("\n Sparse Matrix Representation of 2nd matrix: ");
for(i=0;i<r1;i++){printf("\n");for(j=0;j<c1;j++){printf("%d\t",q[i][j]);}}
printf("\n Array Representation of 1st matrix ");
printf("\nROW \tCOLUMN \tNUMBER");
for(i=0;i<=u[0][2];i++){
printf("\n");
printf("%d\t%d\t%d",u[i][0],u[i][1],u[i][2]);
}
printf("\n Array Representation of 2nd matrix ");
printf("\nROW \tCOLUMN \tNUMBER");
for(i=0;i<=v[0][2];i++){
printf("\n");
printf("%d\t%d\t%d",v[i][0],v[i][1],v[i][2]);
}
for(i=0;i<r1;i++)
{for(j=0;j<c1;j++){
z[i][j]=x[i][j]+q[i][j];
}}
printf("\nSparse MAtrix After addition:");
for(i=0;i<r1;i++){printf("\n");for(j=0;j<c1;j++){printf("%d\t",z[i][j]);}}
a[0][0]=r1;
a[0][1]=c1;
i=1;
j=1;
k=1;
y=0;
int s=0;
int cnt=0;
while(i<=u[0][2] && j<=v[0][2]){
if(u[i][0]==v[j][0]){
if(u[i][1]==v[j][1]){
s=u[i][2]+v[j][2];
if(s!=0)
{
a[k][0]=u[i][0];a[k][1]=u[i][1];a[k][2]=s;
k++,cnt++;}
i++,j++;}
else if(u[i][1]<v[j][1]){
a[k][0]=u[i][0];a[k][1]=u[i][1];a[k][2]=u[i][2];k++,i++,cnt++;}
else
{a[k][0]=v[j][0];a[k][1]=v[j][1];a[k][2]=v[j][2];k++,j++,cnt++;}}
else if(u[i][0]<v[j][0]){
a[k][0]=u[i][0];a[k][1]=u[i][1];a[k][2]=u[i][2];k++,i++,cnt++;}
else
{a[k][0]=v[j][0];a[k][1]=v[j][1];a[k][2]=v[j][2];k++,j++,cnt++;}}
while(j<=v[0][2]){
a[k][0]=v[j][0];a[k][1]=v[j][1];a[k][2]=v[j][2];k++,j++,cnt++;}
while(i<=u[0][2]){
a[k][0]=u[i][0];a[k][1]=u[i][1];a[k][2]=u[i][2];k++,j++,cnt++;}
a[0][2]=cnt;
printf("\n Array Representation of added sparse matrix:");
printf("\nROW \tCOLUMN \tNUMBER");
for(i=0;i<=a[0][2];i++){
printf("\n");
printf("%d\t%d\t%d",a[i][0],a[i][1],a[i][2]);
}
printf("\n");
}
else
{
printf("\n Entered matrix not bcompatable\n");
}
}
