#include <stdio.h>

int main()
{
   int a[100],n,k,i,j,m,p,s;
   scanf("%d%d",&n,&k);
  
  for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
    m=n-k;
   for(i=0;i<=m;i++)
   {
       s=0;
       for(j=0;j<n;j++)
       {
          if(a[j]>s)
          {
              s=a[j];
              p=j;
          }
       }
       a[p]=0;
   }
   printf("%d",s);
    return 0;
}
