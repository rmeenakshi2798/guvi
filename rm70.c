#include <stdio.h>

int main()
{
   int n,i,p=1;
   scanf("%d",&n);
  for(i=0;;i++)
  {
    
      p=p*2;
      if(n<p)
      {
          printf("%d",p);
          break;
      }
  }

    return 0;
}
