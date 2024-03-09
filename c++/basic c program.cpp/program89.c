#include<stdio.h>
int main()
{
   int n,i,fact;
   printf("EnterThevalue:");//question10
   scanf("%d",&n);
   fact=1;
   for(i=1;i<=n;i++) {
        fact=fact*i;
   }
   printf("%d",fact);
   return 0;
}
