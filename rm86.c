
#include <stdio.h>

int main()
{
  char a[30];
  int i=0,j,c=0,s;
  scanf("%s",a);
 for(i=0;a[i]!='\0';i++);
c=i;
  s=c;
  printf("%d",c);
  for(i=0;a[i]!='\0';i++)
  {
      for(j=i+1;a[j]!='\0';j++)
      {
          if(a[i]==a[j])
          {
            s--;
            a[j]='$';
          }
      }
  }
  if(c==s)
  {
      printf("yes");
  }
  else
  {
      printf("No");
  }
return 0;
}
