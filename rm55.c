#include <stdio.h>

int main()
{
    int a,b,m;
    scanf("%d%d",&a,&b);
    m=a*b;
    if(m%2==0)
    {
        printf("even");
    }
    else if(m%2!=0)
    {
        printf("odd");
    }
    return 0;
}
