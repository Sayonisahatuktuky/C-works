#include <stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
   long long int s=0;
   int arr[n];
  for(int i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
   
    s+=arr[i];
  }
 
  if(s<0){
    s=s*-1;
  }
printf("%lld",s);
return 0;
}