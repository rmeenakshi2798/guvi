#include <stdio.h>

int main()
{
   int n,r,a[50],k=0,c=0,i;
 scanf("%d",&n);
 while(n)
 {
     r=n%10;
     a[k]=r;
     k++;
     c++;
     n=n/10;
 }
 a[k]='\0';
 for(i=c-1;i>=0;i--)
 
{
    printf("%d ",a[i]);
}

    return 0;
}
