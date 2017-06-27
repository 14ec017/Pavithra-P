#include<stdio.h>
#include<conio.h>
void main()
{
int n,k,a[10],i;
clrscr();
printf("\n Enter the elements:");
scanf("%d",&n);
printf("\nEnter the index:");
scanf("%d",&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=k;i<n;i++)
{
printf("%d",a[i]);
}
for(i=0;i<k;i++)
{
printf("%d",a[i]);
}
getch();
}
