#include <stdio.h>

int main()
{
   char a[100];
   int n=0,i;
   scanf("%s",a);
   
   for(i=0;a[i]!='\0';i++)
   {
      if(a[i]=='1'||a[i]=='0')
      {
          n=1;
      }
      else
      {
          n=0;
          printf("no");
          break;
      }
   }
if(n==1)
{
    printf("yes");
}
    return 0;
}
