#include<stdio.h>
int main ()
{
  int h,r,k,x1,y1;
  int LHS,RHS;
  printf("EnterThevalue:");
  scanf("%d%d%d%d%d",&h,&k,&x1,&y1,&r);
  LHS=(x1-h)*(x1-h)+(y1-k)*(y1-k);
  RHS=r*r;
  if(LHS<RHS)
  {
      printf("");
  }
  else if (LHS==RHS)

  {
  printf("In The Circle");
  }
  else
  {
      printf("");
  }
return 0;
}
