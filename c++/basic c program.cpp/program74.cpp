//Question15
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int main()
{
    int x,y;
    printf("EnterTheValues:");
    scanf("%d%d",&x,&y);
    if(x==0&& y==0)
    {
        printf("Origin");
    }
    else if(x==0)
    {
        printf("Y-axis");
    }
    else if(y==0)
    {
        printf("X-axis");
    }
    else
    {
        printf("OtherOrigin");
    }
    return 0;
}
