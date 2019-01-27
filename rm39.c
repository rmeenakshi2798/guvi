#include <stdio.h>

int main()
{
    int n=10,a[100],i,max=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
        max=a[i];
    }
    }
    printf("%d",max);
    return 0;
}
