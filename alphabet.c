#include<stdio.h>
#include<conio.h>
void main()
{
char a;
printf("\n enter the caharacter:");
scanf("%c",&a);
if((a>='a'&&a<='z')||(a>='A'&&a<='Z'))
{
printf("\n the character is an alphabet");
}
else
{
printf("\nThe character is not an alphabet");
}
getch();
}
