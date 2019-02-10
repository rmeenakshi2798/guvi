#include <stdio.h>


int main()
{
   char a[50];
   int i,c1=0,c2=0,c3=0;
  scanf("%[^\n]",a);
   
   for(i=0;a[i]!='\0';i++)
   {
       if((a[i]>='a'&&a[i]<='z')||(a[i]>='Z'&&a[i]<='Z'))
       {
           c1++;
       }
       else if(a[i]>='0'&&a[i]<='9')
       {
           c2++;
       }
       else
       {
           c3++;
       }
   }
   if(c1!=0&&c2!=0&&c3==0)
   {
       printf("Yes");
       }
else
{
    printf("No");
}
    return 0;
}
