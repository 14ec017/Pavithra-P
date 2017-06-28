#include<stdio.h>
#include<conio.h>
void main()
{
char s[100];
int i=0,word=0;
printf("Enter the sentence:");
scanf("%s",s);
while(s[i]!='\0')
{
if(s[i]==' ')
{
word++;
}
i++;
}
printf("Words:%d",word);
getch();
}
