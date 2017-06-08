#include<stdio.h>
#include<conio.h>
void main()
{
int a,d,rem,res=0;
printf("\nEnter the armstrong num:");
scanf("%d",a);
b=a;
while(b!=0)
{
rem=b%10;
res+=rem*rem*rem;
b/=10;
}
if(res==a)
{
 printf("%d is an Armstrong number.",number);
    else
        printf("%d is not an Armstrong number.",number);
}
getch();
}
