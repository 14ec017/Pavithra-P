#include<stdio.h>
#include<conio.h>
void main()
{
int a=-1,c,n,b=1;
clrscr();
printf("Enter the range:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
c=a+b;
a=b;
b=c;
printf("%d",c);
}
getch();
}
