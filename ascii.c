#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[10];
int i,sum=0,avg,n;
gets(a);
n=strlen(a);
for(i=0;i<=n;i++)
{
printf("%d",a[i]);
sum+=a[i];
avg=sum/n;
printf("%d",avg);
printf("%c",avg);
}
getch();
}
