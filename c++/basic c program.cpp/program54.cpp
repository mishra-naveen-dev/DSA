#include<stdio.h>
#include<math.h>
int main()
{
    int  n,a,b,c,d,e,ans;
    printf("EnterTheFiveDigitNumber:");
    scanf("%d",&n);
    a=(n/10000)%10;
    b=(n/1000)%10;
    c=(n/100)%10;
    d=(n/10)%10;
    e=(n/1)%10;
    a=a+1;
    b=b+1;
    c=c+1;
    d=d+1;
    e=e+1;
    a=a%10;
    b=b%10;
    c=c%10;
    d=d%10;
    e=e%10;
    ans=a*10000+b*1000+c*100+d*10+e;
    printf("%d\nTheSumOfFiveDigitNumberAfterAddingTheNewNumber:",ans);
    return 0;

}
