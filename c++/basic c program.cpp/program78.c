#include<stdio.h>
int main ()
{
    int a,b,c;
    int sum;
    printf("EnterTheVale:");
    scanf("%d%d%d",&a,&b,&c);//question18
    sum=a+b+c;
    printf("sum Of all digits is equal to:\n");
    if (a+b>c&&b+c>a&&a+c>b)
    {
        printf("Valid\n");
    }
    else {
        printf("Invalid");
    }
    return 0;
}
