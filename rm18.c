#include <stdio.h>

void main()
{
int l,a,b,temp1,temp2,i,j,temp,rem,sum=0,c=1;

printf("enter number\n");
scanf("%d%d",&a,&b);
temp1=a;
while(temp1>0)
{
temp1=temp1/10;
l++;
}

for(i=a+1;i<b;i++)
{
sum=0;
temp=i;
while(temp>0)
{
    c=1;
rem=temp%10;
for(j=0;j<l;j++)
{
c=c*rem;
}
sum=sum+c;
temp=temp/10;
}
if(sum==i)
{
printf("%d armstrong number\n",i);

}
}
getch();
}
