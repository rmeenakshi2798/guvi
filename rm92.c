#include <stdio.h>

int main()
{
   int N,a[30],i,sum=0;
   scanf("%d",&N);
   for(i=0;i<N;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<N;i++)
   {
       sum=sum+a[i];
   }
printf("%d",sum);
    return 0;
}
