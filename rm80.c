#include <stdio.h>
#include<math.h>

int main()
{
 int n,r,a[50],k=0,i,l;
 scanf("%d",&n);
 while(n)
 {
     r=n%10;
     if(r%2!=0)
     {
         a[k]=r;
         k++;
 }
 n=n/10;
 }
 a[k]='\0';
 
 for(i=k-1;i>=0;i--)
 {
     printf("%d ",a[i]);
 }
 
 

    return 0;
}
