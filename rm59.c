#include <stdio.h>

int main()
{
    int n,r,c=0;
    scanf("%d",&n);
    while(n)
    {
        r=n%10;
        c++;
        n=n/10;
    }
printf("%d",c);
    return 0;
}
