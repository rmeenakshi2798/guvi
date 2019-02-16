#include <stdio.h>
#include<math.h>

int main()
{
 int n,m,p;
 float q;
 scanf("%d%d",&n,&m);
 n=n*m;
 q=sqrt(n);
p=q;
if((q*q)==n)
{
    printf("yes");
}
else
{
    printf("no");
}
     
 

    return 0;
}
