
#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    float per;
    printf("EnterNumbers:");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    per=a+b+c+d+e;
    printf("%ftotalPercentage",per);
    if(per>=60)
    {
        printf("First Division");
    }
    else if(per>50)
    {
        printf("Second Division");
    }
    else if(per>=40)
    {
        printf("ThirdDivision");
    }
    return 0;
}
