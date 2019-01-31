#include<stdio.h>
void main()
{
char a[50],b[50],c[50];
int i,z=0;
scanf("%s%s",a,b);
 
 for(i=0;a[i]!='\0';i++)
 {
     c[z]=a[i];
     z++;
 }
 for(i=0;b[i]!='\0';i++)
 {
     c[z]=b[i];
     z++;
 }
 c[z]='\0';
 printf("%s",c);
 getch();
 }
