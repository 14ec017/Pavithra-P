#include<stdio.h>
#include<conio.h>
void main()
{
char a[10];
clrscr();
printf("Day:");
scanf("%s",a);
if((strcmpi(a,"monday")==0)||(strcmpi(a,"tuesday")==0)||(strcmpi(a,"wednesday")==0)||(strcmpi(a,"thrusday")==0)||(strcmpi(a,"friday")==0))
{
printf("True");
}
else
{
printf("False");
}
getch();
}
