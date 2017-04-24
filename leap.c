#include<stdio.h>
#include<conio.h>
void main()
{
int a;
printf("\n Enter the year");
scanf("%d",&a);
if((a%4==0)||(a%100!=0)||(a%400==0))
{
printf("\n The yera is leap");
}
else
{
printf("\n The year is not leap year");
}
getch();
}
