#include <stdio.h>

int main()
{
    char a[100];
    int i,c=0;
    scanf("%[^\n]",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[0]!=' ')
        {
        
        if(a[i]==' ')
        {
            
        if((a[i+1]!=' ')||(a[i+1]=='\0'))
        {
            c++;
        
    }
        }
    else if(a[i+1]=='\0')
    {
        c++;
    }
        
        }
    }
    printf("%d",c);

    return 0;
}
