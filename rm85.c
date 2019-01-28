//set 9-85
#include <stdio.h>

int main()
{
   char a[30],b[30],c[30];
   int i,k=0,j=0;
   scanf("%s",a);
   for(i=0;a[i]!='\0';i++)
   {
      if(i%2==0)
      {
          b[k]=a[i];
          k++;
      }
      else
      {
          c[j]=a[i];
          j++;
      }
   }
   b[k]='\0';
   c[j]='\0';
   
for(i=0;b[i]!='\0';i++)
{
    printf("%c",b[i]);
}
printf(" ");
for(i=0;c[i]!='\0';i++)
{
    printf("%c",c[i]);
}
    return 0;
}
