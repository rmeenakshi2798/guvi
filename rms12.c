#include <stdio.h>

int main()
{
   int num,rem,sum=0,temp;
   scanf("%d",&num);
   temp=num;
   while(num)
   {
       rem=num%10;
       sum=sum*10+rem;
       num=num/10;
   }
  

   if(temp==sum)
   printf("Yes");
   else
   printf("No");
    return 0;
}
