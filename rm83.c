#include <stdio.h>

int main()
{
   char c;
   int a,b;
   scanf("%d %c %d",&a,&c,&b);
   if(c=='/')
   printf("%d",a/b);
   else if(c=='%')
   printf("%d",a%b);
}
