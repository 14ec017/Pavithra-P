#include<stdio.h>
#include<conio.h>
void main()
{
int n,i;
unsigned long long factorial=1;
printf("Enter the num:");
scanf("%d",&n);
if(n<0)
{
printf("Not a factorial:");
}
else
{
for(i=1;i<=n;i++)
{
factorial*=i;
}
printf("Factorial %d=%llu",n,factorial);
}
getch();
}
