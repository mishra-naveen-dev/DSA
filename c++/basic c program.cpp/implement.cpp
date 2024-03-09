#include<stdio.h>
int main()
{
    int a[5],i,j,t,min,n=5;
    for(int i=0;i<5;i++)
    {
        printf("Enter value :\n");
        scanf("%d",&a[i]);

    }
    for(i=0;i<n-1;i++)
    {
        if(a[j]<a[min])

            min=j;
    }
    t=a[i];
    a[i]=a[min];
    a[min]=t;
    printf("Sorted array is:\n");
    for(i=0;i<n;i++)
        printf("%d\n",a[i]);
    return 0;
}
