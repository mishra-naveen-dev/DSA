#include<stdio.h>
int main()
{
    int noi,poi;//noi=numberOfItme,poi=PriceOfItme
    int tp;//totalPrice
    float dis,fp;//discount//finalPrice
    printf("EnterNumberOfItme:");
    scanf("%d",&noi);
    printf("EnterPriceOfItme:");
    scanf("%d",&poi);
    tp=noi*poi;
    if(noi>1000)
    {
        dis=0.1*tp;
     }
     fp=tp-dis;
     printf("%f",fp);
 return 0;
}
