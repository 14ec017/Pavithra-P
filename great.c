#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
scanf("%d%d%d",&a,&b,&c);
if((a>b)&&(a>c))
{
printf("a is high");
}
else if((b>a)&&(b>c))
{
printf("b is high");
}
else
{
printf("c is high");
}
getch();
}
