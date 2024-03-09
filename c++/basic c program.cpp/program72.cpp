//Question13
#include<stdio.h>


int main ()
{
    int x1,y1,x2,y2,x3,y3,Ihs,rhs;
    printf("EnterTheValuesOf:");
    scanf("%d",&x1);
    printf("EnterTheValuesOf:");
    scanf("%d",&y1);
    printf("EnterTheValuesOf:");
    scanf("%d",&x2);
    printf("EnterTheValuesOf:");
    scanf("%d",&y2);
    printf("EnterTheValuesOf:");
    scanf("%d",&x3);
    printf("EnterTheValuesOf:");
    scanf("%d",&y3);
    Ihs=(y2-y1)*(x3-x2);
    rhs=(x2-x1)*(y3-y2);
    printf("%d\n",Ihs);
    printf("%d\n",rhs);
    if(Ihs==rhs)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}
