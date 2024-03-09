#include<stdio.h>
int main()
{
   int j,n;
   printf("Enter the num which table you to printf=");
   scanf("%d",&n);

    for(int i=1;i<=10;i++)
    {

         for(j=1;j<=n;j++)
         {
             printf("%d*%d=%d, ",j,i,i*j);
         }
      printf("\n");
}
}
