#include <stdio.h>

int main()
{
    int mint,h=0,m;
    scanf("%d",&mint);
    if(mint>60)
    {
        h=mint/60;
        m=mint%60;
    }
    else
    {
        m=mint;
    }
    printf("%d %d",h,m);
    

    return 0;
}
