#include<stdio.h>
int main()
{
    int n;

   printf("Enter the value:");
   scanf("%d",&n);
   for(int i=1;i<=n;i++)
   {
       for(int col=1;col<=n;col++)
       {
           printf("%d",i);
       }
       printf("\n");
   }
}
