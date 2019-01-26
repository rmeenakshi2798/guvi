#include <stdio.h>

int main()
{
   int n,m;
   int i,j,flag=0;;
   scanf("%d%d",&n,&m);
   for(i=n;i<=m;i++)
   {
       flag=0;
       for(j=1;j<=i;j++)
       {
           
           if(i%j==0)
           {
               flag++;
               
           }
       }
       if(flag==2)
    
           printf("%d ",i);
       
   }

    return 0;
}




