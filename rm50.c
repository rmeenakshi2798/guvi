
    #include <stdio.h>

int main()
{
   int n,i,p=1,c=0;
   scanf("%d",&n);
  for(i=0;i<=n;i++)
  {
    
      p=p*2;
      if(n==p)
      {
          c=1;
          printf("yes");
          break;
      }
  }
  if(c==0)
  {
      printf("no");
  }

    return 0;
}
