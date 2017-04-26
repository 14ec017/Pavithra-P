#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,i;
scanf("%d\n%d",&a,&b);
printf("\n Display between %d and %d",a,b);
for(i=0;i<=b;i++)
{
if(i%2==0)
{
printf("%d",i);
}
getch();
}
