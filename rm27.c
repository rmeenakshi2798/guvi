#include <stdio.h>

int main()
{
    char a[100];
    int i=0,c=0,l=0;
    scanf("%[^\n]",a);
    while(a[i]!='\0')
    {
        l++;
        i++;
    }
   
     if(a[0]=='0'||a[0]=='1'||a[0]=='2'||a[0]=='3'||a[0]=='4'||a[0]=='5'||a[0]=='6'||a[0]=='7'||a[0]=='8'||a[0]=='9')
    for(i=0;a[i]!='\0';i++)
    
    {
        if(a[i]=='0'||a[i]=='1'||a[i]=='2'||a[i]=='3'||a[i]=='4'||a[i]=='5'||a[i]=='6'||a[i]=='7'||a[i]=='8'||a[i]=='9'||a[i]=='.')
        {
            c++;
        }
    }
    if(c==l)
    {
    printf("Yes");
}
else
{
    printf("No");
}
    return 0;
}
