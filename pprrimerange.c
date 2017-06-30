#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,flag=0,a,b,c=0;
clrscr();
scanf("%d %d",&a,&b);
for(i=a;i<=b;i++)
{
flag=0;
for(j=2;j<=i/2;j++)
{
if(i%j==0)
{
flag=1;
break;
}
if(flag==0)
{
printf("%d\n",i);
c++;
}}printf("%d\n",c);
getch();
}
