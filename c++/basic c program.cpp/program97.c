
//question16
#include<stdio.h>
#include<limits.h>
int main ()
{
    int n,mini,max;
   printf("EnterTheNumber:");
    mini=INT_MAX;
    max=INT_MIN;
    while ( scanf("%d",&n))
    {
        if (n>max) max=n;
    if(n<mini) mini=n;
    }
    {


        printf("Number%d%d",mini,max);
    }

}
