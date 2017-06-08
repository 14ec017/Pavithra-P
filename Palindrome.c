#include<stdio.h>
#include<conio.h>
void main()
{
int a,b=0;rem,c;
printf("\n Enter the number:");
scanf("%d",&a);
c=a;
while(a!=0)
{
rem=n%10;
b=b*10+rem;
n/=10;
}
if(c==b)
{
printf("Palindrome number");
}
else
{
printf("not Palindrome number");
}
getch();
}
