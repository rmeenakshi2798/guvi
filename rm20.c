#include <stdio.h>

int main()
{
    int n,c,i;
    scanf("%d",&n);
    c=1;
    for(i=1;i<=5;i++)
    {
        c=n*i;
        printf("%d ",c);
    }
    return 0;
}
