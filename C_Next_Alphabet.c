 #include <stdio.h>
 int main()
 {
   char n;
   scanf("%c",&n);
   if(n>='a' && n<'z')
   {
    int ans=n+1;
    printf("%c",ans);
   }
   else if(n=='z')
   {
    printf("a");
   }
 return 0;
 }