#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,i;
clrscr();
scanf("%d",&a);
scanf("%d",&b);
for(i=0;i<=b;i++)
{
c=a*i;
printf("\n%d*%d=%d",a,i,c);
}
getch();
}
