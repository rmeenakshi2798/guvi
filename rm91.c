#include <stdio.h>

int main()
{
    int l,b,h,s,v;
    scanf("%d%d%d",&l,&b,&h);
    s=(2*l*b)+(2*l*h)+(2*h*b);
    v=l*b*h;
    printf("%d %d",s,v);

    return 0;
}
