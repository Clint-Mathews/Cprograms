NAME                                             :CLINT MATHEWS
CLASS                                            :S3 R
ROLL NO                                        :22
AIM                                                 :TO TRANSPOSE A SPARSE 							     MATRIX


#include<stdio.h>
main()
{
int r,z,a[100][100],b[100][3],c[100][3],i,j,k,cnt;
printf("\n Enter Order of  matrix: ");
scanf("%d",&r);
scanf("%d",&z);
k=1;
printf("\n Enter Elements of matrix: \n");
for(i=0;i<r;i++){for(j=0;j<z;j++){scanf("%d",&a[i][j]);}}
printf("\n Entered matrix");
for(i=0;i<r;i++){printf("\n");
for(j=0;j<z;j++){printf("%d\t",a[i][j]);}}
printf("\n");
b[0][0]=r;
b[0][1]=z;
cnt=0;
for(i=0;i<r;i++){for(j=0;j<z;j++){
if(a[i][j]!=0){
b[k][0]=i;
b[k][1]=j;
b[k][2]=a[i][j];
k++;
cnt++;
}}}
b[0][2]=cnt;
k=1;
printf("\n Sparse matrix reprfesentatyion of above matrix: \n");
for(i=0;i<=b[0][2];i++){printf("\n");for(j=0;j<3;j++){printf("%d\t",b[i][j]);}}
c[0][1]=b[0][0];
c[0][0]=b[0][1];
c[0][2]=b[0][2];
for(i=0;i<b[0][1];i++){for(j=1;j<=b[0][2];j++){
if(b[j][1]==i){
c[k][0]=b[j][1];
c[k][1]=b[j][0];
c[k][2]=b[j][2];
k++;}
}}
printf("\n Transpose of above Sparse matrix: \n");
for(i=0;i<=c[0][2];i++){printf("\n");for(j=0;j<3;j++){printf("%d\t",c[i][j]);}}


}
