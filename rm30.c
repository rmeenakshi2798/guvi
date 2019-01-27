#include <stdio.h>

int main()
{
    int h1,h2,m1,m2,h=0,m,min=0;
    scanf("%d%d",&h1,&m1);
     scanf("%d%d",&h2,&m2);
     if(h1!=0)
     h1=(h1*60)+m1;
     else
     h1=m1;
     if(h2!=0)
      h2=(h2*60)+m2;
     else
     h2=m2;
     if(h1>h2)
m=h1-h2;
else
m=h2-h1;
if(m>=60)
{
h=m/60;
min=m%60;
printf("%d %d",h,min);
}
else
{
    min=m;
    printf("%d %d",h,min);
    
    
}

    return 0;
}
