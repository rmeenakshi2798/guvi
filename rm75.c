#include <stdio.h>

int main()
{
    int i,l,c,p,j;
 char a[100];
 scanf("%s",a);
 for(i=0;a[i]!='\0';i++);
 l=i;
if(l%2!=0)
{
 c=l-1;
 p=c/2;
 a[p]='*';
}
else
{
    c=l-1;
 p=c/2;
 a[p]='*';
 a[p+1]='*';
}
 for(j=0;a[j]!='\0';j++)
 {
     printf("%c",a[j]);
 }
 

    return 0;
}
