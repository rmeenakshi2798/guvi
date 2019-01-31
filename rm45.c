#include <stdio.h>

int main()
{
   int a,count=0,r;
   scanf("%d",&a);
   while(a)
   {
       r=a%10;
       count++;
       a=a/10;
       
   }
   printf("%d",count);
   

    return 0;
}
