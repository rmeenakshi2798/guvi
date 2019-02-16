#include <stdio.h>

int main()
{
   int a,d,b,s=0,c,i;
   scanf("%d%d%d",&a,&d,&b);
   c=a;
s=s+a;
for(i=1;i<b;i++)
{
    a=c+(d*i);
    s=s+a;
}
printf("%d",s);
    return 0;
}
