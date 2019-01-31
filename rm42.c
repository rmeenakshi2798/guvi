#include <stdio.h>

int main()
{
   char a[50],b[50];
   int l1,l2,i;
   scanf("%s%s",a,b);
   for(i=0;a[i]!='\0';i++);
   l1=i;
    for(i=0;b[i]!='\0';i++);
   l2=i;
   if(l1>l2)
   {
       printf("%s",a);
   }
   else if(l2>l1)
   {
       printf("%s",b);
   }
    if(l1==l2)
   {
       printf("%s",b);
   }
   
  
    return 0;
}
