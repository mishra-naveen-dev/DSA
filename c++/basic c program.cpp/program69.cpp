//Question11 Ass
#include<stdio.h>
#include<math.h>
int main ()
{
    int num;
    printf("EnterTheNumber:");
    scanf("%d",&num);
    if(num<0)
    {
        num=num*-1;
    }
        printf("%d\nThisAbsulotValue",num);

    return 0;
}
