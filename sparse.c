#include<stdio.h>
#include<stdlib.h>
void main()
{
int r1,r2,c1,c2,u[10][3],x[100][100],z[100][100],v[10][3],a[10][3];
void insert(int [10][3],int ,int);
void insert1(int [10][3],int ,int);
void display(int [10][3]);
void display1(int [100][100],int int );
void display2(int [10][3]);
void add(int [10][3],int [10][3],int [10][3]);
printf("\n\nENTER NUMBER OF ROWS AND COLUMNS FOR MATRIX 1\n\t");
scanf("%d%d",&r1,&c1);
printf("\n\nENTER NUMBER OF ROWS AND COLUMNS FOR MATRIX 2\n\t");
scanf("%d%d",&r2,&c2);
if(r1!=r2 && c1!=c2){printf("\n\nENTER ADDITION NOT POSSIBLE\n\n ");}
else{ 
u[0][0]=r1;u[0][1]=c1;
 v[0][0]=r2;v[0][1]=c2;a[0][0]=r1;a[0][1]=c1;
 printf("\n\nENTER ELEMENTS TO MATRIX 1");insert(u,x);
 printf("\n\nENTER ELEMENTS TO MATRIX 2");insert1(v,z);
 printf("\n\nSPARSE MATRIX 1");display1(x,r1,c1);
 printf("\n\n\t\tARRAY REPRESENTATION OF MATRIX 1\n");display(u);
 printf("\n\nSPARSE MATRIX 2");display1(z,r1,c1);
 printf("\n\n\t\tARRAY REPRESENTATION OF MATRIX 2\n");display(v);
 add(u,v,a);
 printf("\n\nSUM MATRIX");display2(a);
 printf("\n\nARRAY REPRESENTATION OF SUM MATRIX");display(a);
 printf("\n\n");
}
}
void insert(int u[10][3],int l[100][100])
{
 int h,i,j,y;
 for(i=0,y=1;i<u[0][0];i++)
 {
	for(j=0;j<u[0][1];j++)
	{
	 scanf("%d",&h);
	 l[i][j]=h;
	 if(h!=0)
		{
		 u[y][0]=i;u[y][1]=j;u[y][2]=h;
		 y++;
		} 
	}
 }
 u[0][2]=y-1;
}
void insert1(int u[10][3],int l[100][100])
{
 int h,i,j,y;
 for(i=0,y=1;i<u[0][0];i++)
 {
        for(j=0;j<u[0][1];j++)
        {
         scanf("%d",&h);
         l[i][j]=h;
         if(h!=0)
                {
                 u[y][0]=i;u[y][1]=j;u[y][2]=h;
                 y++;
                } 
        }
 }
 u[0][2]=y-1;
}
void display(int u[10][3])
{
 int i;
 printf("\nROW \tCOLUMN \tNUMBER");
 for(i=0;i<=u[0][2];i++)
	{
	 printf("\n");
	 printf("%d\t%d\t%d",u[i][0],u[i][1],u[i][2]);
	}
}
void display1(int a[100][100],r,c)
{int i,j;
for(i=0;i<r;i++){printf("\n");for(j=0;j<c;j++){printf("%d,a[i][j]\t");}}}
//void display2(int a[10][3])
//{
// int i,j,k=1,y=0;
 //for(i=0;i<a[0][0];i++)
  // { 
   // for(j=0;j<a[0][1];j++)
   // {
    //  if(a[k][0]==i) 
      // {
        //if(a[k][1]!=j)
        // printf("\t%d",y);
       // else
        // {printf("\t%d",a[k][2]);k++;}

      // }
     // else {printf("\t%d",y);}
   // }
   // printf("\n");
  // }
//}

void add(int u[10][3],int v[10][3],int a[10][3])
{
 int i=1,j=1,k=1,y=0,s=0,cnt=0;
 while(i<=u[0][2] && j<=v[0][2])
 {
  if(u[i][0]==v[j][0])
  {
   if(u[i][1]==v[i][1])
	{
	 s=u[i][2]+v[i][2];
	 if(s!=0)
	 {
	  a[k][0]=u[i][0];a[k][1]=u[i][1];a[k][2]=s;
          k++,cnt++;
	 }
         i++,j++;
	}
   else if(u[i][1]<v[j][1])
	{
	 a[k][0]=u[i][0];a[k][1]=u[i][1];a[k][2]=u[i][2];k++,i++,cnt++;
	}
   else
	{
	 a[k][0]=v[j][0];a[k][1]=v[j][1];a[k][2]=v[j][2];k++,j++,cnt++;
	}
  }
  else if(u[i][0]<v[j][0])
        {
         a[k][0]=u[i][0];a[k][1]=u[i][1];a[k][2]=u[i][2];k++,i++,cnt++;
        }
  else
        { 
         a[k][0]=v[j][0];a[k][1]=v[j][1];a[k][2]=v[j][2];k++,j++,cnt++;
        }
 }
 a[0][2]=cnt;
}

