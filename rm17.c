#include <stdio.h>

int main()
{
int a,temp1,temp2,i,c=1,rem,sum=0,l=0;
scanf("%d",&a);
temp1=a;
temp2=a;
while(temp1>0)
{
temp1=temp1/10;
l++;
}
while(temp2>0)
{
    c=1;
rem=temp2%10;
for(i=0;i<l;i++)
{
c=c*rem;
}
sum=sum+c;
temp2=temp2/10;
}
if(sum==a)

printf("Yes");
else
printf("No");
    return 0;
}
