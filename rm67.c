#include <stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=n;;i++)

{
    if(i%10==0)
    {
        printf("%d",i);
        break;
    }
}
    return 0;
}
