#include <stdio.h>
int main()
{
  char a;
  int i, cnt[26]={0};
  while(scanf("%c",&a)!=EOF )
  {
    int v=a-'a';
    cnt[v]++;
  }
  for(i=0;i<26;i++){
    if(cnt[i]!=0){

      printf("%c : %d\n",i+'a',cnt[i]);
    }
  }
return 0;
}