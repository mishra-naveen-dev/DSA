#include<stdio.h>
int main ()
{
    int x,y;
    printf("EnterTheValue:");
    scanf("%d%d",&x,&y);
    if(x==0&& y==0)
    {
        printf("Origin");
    }
    else if (x==0)
    {
        printf("Yaxis");
    }
    else if (y==0)
    {
        printf("X-axis");
    }
    return 0;
}

//qquestion 15
