#include<stdio.h>
#include<math.h>
int main()
{
    int cp,sp,amt;
    printf("EnterCostPrice:");
    scanf("%d",&cp);
    printf("EnterSellingPrice");
    scanf("%d",&sp);
    if(sp>cp)
    {
        amt=sp-cp;
        printf("Profit=%d",amt);
    }
    else if (cp>sp)
    {
        amt=cp-sp;
        printf("Loss=%d",amt);
    }
    else
    {
        printf("NoProfitNoLoss");
    }
    return 0;
}
