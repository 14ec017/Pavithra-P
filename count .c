#include<stdio.h>
#include<conio.h>
void main()
{
long long num;
int a=0;
clrscr();
scanf("%lld",&num);
while(num!=0)
{
num=num/10;
a++;
}
printf("\n The digits are %d",a);
getch();
}
