#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,res=0,rem,i,c;
clrscr();
scanf("%d",&a);
scanf("%d",&b);
for(i=a;i<b;i++)
{
c=i;
res=0;
while(c!=0)
{
rem=c%10;
res+=rem*rem*rem;
c/=10;
}
if(res==i)
{
printf("%d",i);
}}
getch();
}
