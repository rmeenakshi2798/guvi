#include <stdio.h>

int main()
{
   int a[100],n,k,i;
   scanf("%d%d",&n,&k);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
  k=k-1;
  printf("%d",a[k]);

    return 0;
}
