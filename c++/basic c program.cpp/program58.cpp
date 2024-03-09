#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int a,b;
    int q,r;
    printf("EnterNumber:");
    scanf("%d%d",&a,&b);
    q=a/b;
    r=a%b;
    printf("%d \n%d",q,r);
    return 0;
}
