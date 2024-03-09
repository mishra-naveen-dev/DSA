#include<stdio.h>
int main()//question9
{
  int i,sum,n;
  printf("EnterTheValue OF n:");
  scanf("%d",&n);
  sum=0;
  for(i=1;i<=n;i++)
  {

    sum=sum+i;
  }
  printf("%d",sum);

  return 0;
}
