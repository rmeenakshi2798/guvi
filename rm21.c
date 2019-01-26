#include<stdio.h>
void main()
{
int a,d,n,i,c,sum=0;

scanf("%d%d%d",&n,&a,&d);
c=a;
sum=sum+a;
for(i=1;i<n;i++)
{
 a=c+(d*i);
 sum=sum+a;
 }
 printf("%d",sum);
 getch();
}
