#include <stdio.h>
int main()
{
  int n,a;
  scanf("%d",&n);
  int odd=0,even=0,pos=0,neg=0;
  for(int i=1;i<=n;i++)
  {
    scanf("%d",&a);
    if(a%2==0)
    {
        even++;
    }
     else if(a%2==1||a%2==-1)
    {
        odd++;
    }    
    if(a<0)
    {
        neg++;
    } 
    if(a>0)
    {
        pos++;
    }
  }
  printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n",even,odd,pos,neg);

return 0;
}