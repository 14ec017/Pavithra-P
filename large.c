#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("\n Enter the number");
scanf("%d\n%d\n%d",&a,&b,&c);
if((a>b)&&(a>c))
printf("\n A is greater");
else if((b>a)&&(b>c))
printf("\n B is greater");
else
printf("\n C is greater");
getch();
}
