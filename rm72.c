#include <stdio.h>

int main()
{
   char a[50];
   int i,c=0;
   scanf("%s",a);
   for(i=0;a[i]!='\0';i++)
   {
       if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
       {c=1;
           printf("yes");
           break;
       }
       else if(a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
       {c=1;
           printf("yes");
           break;
       }
      
   }
   if(c==0)
   {
       printf("no");
       
   }
    return 0;
}
