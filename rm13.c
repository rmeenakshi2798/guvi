int main()
{
   int num,i,flag=0;
   scanf("%d",&num);
   for(i=2;i<=num/2;i++)
   {
       if(num%i==0)
       {
           flag++;
           break;
       }
   }
       if(flag==0)
           printf("Yes");
           else
           printf("No");
   

    return 0;
}
