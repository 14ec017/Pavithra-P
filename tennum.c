#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,g;
clrscr();
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
g=a[0];
for(i=0;i<10;i++)
{
if(a[i]>g)
{
g=a[i];
}}
printf("Greatest:%d",g);
getch();
}
