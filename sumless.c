#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],n,i,sum=0;
clrscr();
printf("Enter the number:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
a[i]=i+1;
sum+=a[i];
}
printf("%d",sum);
getch();
}
