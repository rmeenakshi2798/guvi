#include <stdio.h>

int main()
{
   int n,k,c=1,i;
   scanf("%d%d",&n,&k);
   for(i=0;i<k;i++)
   {
       c=c*n;
   }
printf("%d",c);
    return 0;
}
