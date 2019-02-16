#include <stdio.h>

int main()
{
   int n;
   scanf("%d",&n);
   while(n)
   {
       if(n%2==0)
       {
           n=n/2;
       }
       else
       {
           printf("%d",n);
           break;
       }
   }
   

    return 0;
}
