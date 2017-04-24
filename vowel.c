#include<stdio.h>
#include<conio.h>
void main()
{
char f;
printf("\n Enter the character:");
scanf("%s",&f);
if((f=='a')||(f=='e')||(f=='i')||(f=='o')||(f=='u')||(f=='A')||(f=='E')||(f=='I')||(f=='O')||(f=='U'))
{
printf("\n the given character is vowel);
}
else
{
printf("\nthe character is constant");
}
getch();
}
