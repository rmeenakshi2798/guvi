#include <stdio.h>

int main()
{
   int a[100],i,l=0,h=0,n;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
      l=l+a[i];
   }
   h=l/n;
   printf("%d ",h);
   
   
    return 0;
}
