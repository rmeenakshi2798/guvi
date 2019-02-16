#include <stdio.h>

int main()
{
   char a[100],b[100];
   int i,k=0,l,n;
   scanf("%s",a);
   scanf("%d",&n);
   for(i=0;a[i]!='\0';i++);
   l=i;
   for(i=l-1;i>=0;i--)
   {
       if(k<n)
       {
       b[k]=a[i];
       k++;
       }
   }
   b[k]='\0';
   for(i=k-1;i>=0;i--)
   {
       printf("%c",b[i]);
   }

    return 0;
}
