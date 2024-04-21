#include <stdio.h>
int main()
{
  int a,b;
  scanf("%d %d",&a,&b);
  int s=a-b;
  if(s>=0)
  {
    printf("%d",s);
  }
  else{
    printf("0");
  }
return 0;
}