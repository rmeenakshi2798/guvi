#include <stdio.h>

int main()
{
    char a[100];
    int i,c=0;
    scanf("%[^\n]",a);
    for(i=0;a[i]!='\0';i++)
    {
       
        if(a[i]=='.')
        {
            if((a[i+1]>='A')&&(a[i+1]<='Z')||(a[i+1]>='a')&&(a[i+1]<='z')||(a[i+1]=='\0'))
        
        {
            c++;
        
    }
        }
         else if((a[i]>='A')&&(a[i]<='Z')||(a[i]>='a')&&(a[i]<='z'))
        {
        if(a[i+1]=='\0')
        {
            c++;
        }
    }
    }
    printf("%d",c);

    return 0;
}
