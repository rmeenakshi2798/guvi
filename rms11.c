#include <stdio.h>

int main()
{
   int a,b,i,pow=1;
   scanf("%d%d",&a,&b);
   for(i=0;i<b;i++)
   {
       pow=pow*a;
   }
   printf("%d",pow);

    return 0;
}
