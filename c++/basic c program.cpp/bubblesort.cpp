#include<stdio.h>
int main()
{
    int array[100];
    int n,c,d,swap;
    printf("Enter number of elements\n");
    scanf("%d",&n);
    printf("Enter  nteger :\n");



    for(c=0;c<n;c++)
    {
        for(d=0;d<n-c-1;d++)
        {
            if(array[d]>array[d++])
            {
                swap=array[d];
                array[d]=array[d+1];
                array[d+1]=swap;
            }
        }
    }
    printf("Sorted list is asccending order :\n");
    for(c=0;c<n;c++)
        printf("%d\n",array[c]);
    return 0;
}
