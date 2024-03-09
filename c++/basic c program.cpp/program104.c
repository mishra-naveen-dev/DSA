#include<stdio.h>
#include<math.h>

int main()//question=20
{
    int x,n,i,j,pow,fact,sign,ans;
    printf("ENTER The NUMBER");
    scanf("%d %d",&x,&n);
    ans=0.0;
    sign=1;
    for(i=1;i<= n; i+=2)
    {
        fact=1;
        pow=1;
        for(int j=1;j<=i;j++)
        {
            fact=fact*i;
            pow=pow*x;
        }
       ans += sign*(pow/fact*1.0);
       sign=sign*-1;
    }
    printf("%d",ans);
    return 0;
}

