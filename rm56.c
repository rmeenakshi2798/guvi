#include <stdio.h>

int main()
{
   char a[100];
   int c=0,p=0,i;
   scanf("%s",a);
   for(i=0;a[i]!=0;i++)
   {
       if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
       {
           c=1;
       }
       if(a[i]>='0'&&a[i]<='9')
       {
           p=1;
       }
   }
if(p==1&&c==1)
{
    printf("yes");
}
else
{
    printf("no");
}
    return 0;
}
