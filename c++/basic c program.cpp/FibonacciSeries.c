#include<stdio.h>
int main( )
{
    int lat,selat,curr,i,n;

    lat= 0;
    selat = 1;
    curr = lat + selat;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    printf("Fibonacci Series:%d , %d,",lat , selat);
    for(i = 3;i <= n; i++)
    {
        printf("%d, ",curr);
        lat = selat;
        selat = curr;
        curr = lat + selat;
    }
return 0;
}
