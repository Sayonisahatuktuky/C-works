#include <stdio.h>
int main()
{
  int a,b,c,d;
  scanf("%d %d %d ",&a,&b,&c);
  if(d==a+b-c)
  {
    printf("NO");
  }
  else if(d==a+b*c)
  {
    printf("NO");
  }
  else if(d==a-b+c)
  {
    printf("NO");
  }
  else if(d==a-b*c)
  {
    printf("NO");
  }
  else if(d==a*b-c)
  {
    printf("NO");
  }
  else if(d==a*b+c)
  {
    printf("NO");
  }
  else
  {
    printf("YES");
  }
return 0;
}