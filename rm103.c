#include <stdio.h>

int main()
{
    char a[100];
    int i;
    scanf("%[^\n]",a);
    if(a[0]>=97&&a[0]<=123)
    {
        a[0]=a[0]-32;
    }
    for(i=1;a[i]!='\0';i++)
    {
        
        if((a[i]==' ')||(a[i]=='.')&& (a[i+1]>=97&&a[i+1]<=123))
        {
            a[i+1]=a[i+1]-32;
        }
    }
     for(i=0;a[i]!='\0';i++)
     {
         printf("%c",a[i]);
     }

    return 0;
}
