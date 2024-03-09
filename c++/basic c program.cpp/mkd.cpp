#include<stdio.h>
#include<conio.h>
#include<string.h>
int main ()
{

  int i,j,spc,n,k;
  printf("Enter the number:");
  scanf("%d",&n);
  spc=n+4-1;
  for(i=1;i<=n;i++)
  {
      for(k=spc;k>=1;k--)
      {
          printf(" ");
      }
      for(j=1;j<=i;j++)
      {
          printf("%d ",i);

      }
      printf("\n");
      spc--;
  }

}
