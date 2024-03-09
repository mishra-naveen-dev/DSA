#include<stdio.h>
int main()
{
    int a[5],i,j,t,n=5;
     printf("Enter value:");
    for ( i=0;i<5;i++)
    {
        scanf("%d",&a[i]);

    }
    printf("Enter the array element:");
    for(i=1;i<n;i++)
    {
        t=a[i];
        for(j=i-1;a[j]>t&&j>=0;j--);
        {
            a[j+1]=a[i];
        }
        a[j+1]=t;
    }
    printf("sorted array is \n");
    for(i=0;i<n;i++)
        printf("%d\n",a[i]);
}
