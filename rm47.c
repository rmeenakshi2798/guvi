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
       if(a[i]>h)
       {
           h=a[i];
       }
   }
   printf("%d ",h);
   l=a[0];
   for(i=0;i<n;i++)
   {
       if(a[i]<l)
       {
           l=a[i];
           
       }
   }
   printf("%d",l);
   
   
    return 0;
}
