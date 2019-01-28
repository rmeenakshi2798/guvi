#include <stdio.h>

int main()
{
   char S[30];
   int i,j,temp;
   scanf("%s",S);
   for(i=0;S[i]!='\0';i++)
   {
       for(j=i+1;S[j]!='\0';j++)
       {
           if(S[i]>S[j])
           {
               temp=S[i];
               S[i]=S[j];
               S[j]=temp;
           }
       }
       
   }
   for(i=0;S[i]!='\0';i++)
   {
       printf("%c",S[i]);
   }

    return 0;
}
