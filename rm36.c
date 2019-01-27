#include <stdio.h>

int main()
{
   char a[100],i,c=0;
   scanf("%[^\n]",a);
   for(i=0;a[i]!='\0';i++)
   {
       if(!(a[i]>='a'&&a[i]<='z')&&!(a[i]>='A'&&a[i]<='Z')&&!(a[i]>='0'&&a[i]<='9')&&(a[i]!=' '))
      
       {
           c++;
           
       }
   }
printf("%d",c);
    return 0;
}
