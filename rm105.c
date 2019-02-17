#include <stdio.h>

int main()
{
   int n,k,t,c=0,s=1;
   scanf("%d%d",&n,&k);
   t=k;
 while(t)
 {
     t=t/10;
     c++;
 }
 while(c)
 {
   s=s*10;
   c--;
 }
 n=n*s+k;
 printf("%d",n);
    return 0;
}
