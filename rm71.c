#include <stdio.h>
#include <string.h>

int main()
{
    char a[50],b[50];
    int i,k=0,z=0,c;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++);
k=i;
for(i=k-1;i>=0;i--)
{
    b[z]=a[i];
    z++;
}
b[z]='\0';
c=0;
for(i=0;a[i]!='\0';i++)
{
    if(a[i]==b[i])
    {
    c++;    
    }
}
if(c==k)
{
    printf("yes");
}
else
{
    printf("no");
}
    return 0;
}
