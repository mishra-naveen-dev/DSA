#include<stdio.h>
#include<math.h>
int main()
{
  int num;
  printf("Enter any number:");
  scanf("%d",&num);
  if(num>0)
  {
      printf("Number is Positive:");
  }
  if (num<0)
  {
      printf("Number is negative:");
  }
  if(num==0)
  {
      printf("Number is zero");
  }
  return 0;
}
