#include <stdio.h>

int main()
{
   int n,count=0,r;
   scanf("%d",&n);
   while(n)
   {
       r=n%10;
       count++;
       n=n/10;
       
   }
   printf("%d",count);
   

    return 0;
}
