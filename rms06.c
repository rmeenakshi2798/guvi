#include<stdio.h>
void main()
{
int n;
printf("enter year\n");
scanf("%d",&n);
if((n%4==0)&&((n%100!=0)||(n%400==0)))
{
printf("Yes");
}
else
{
printf("No");
}
getch();
}
