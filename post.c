#include<stdio.h>
void main()
{
int i,j,k,o,d,q;
char s[1000],a[100];
char t[]="0123456789 ";
printf("\n Enter the expression(only numbers and operators):");
gets(s);
printf("\n");
o=0;
char x[]="-,+,NOT,^,*,/,<.<=,>,>=,AND,OR,XOR ";
for(i=0;s[i]!='\0';i++){
for(k=0;t[k]!=' ';k++){
if(s[i]==t[k]){
printf("%c\t",s[i]);
}
}
for(j=0;x[j]!=' ';j++){
if(s[i]=='(')
{
a[o]=='(';
o++;
}
else if(s[i]==')')
{
for(d=o;d>=0;d--){
if(a[d]=='('){goto r;}
printf("%c\t",a[d]);
}
r:
if(d!=0){q=d;}
}
else
{
a[o]=s[i];
o++;
}}
}
for(d=q;d>=0;d--){printf("%c\t",a[d]);}
}
