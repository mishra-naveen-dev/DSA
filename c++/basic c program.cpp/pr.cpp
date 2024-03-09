#include<stdio.h>
int main()
{
    int i,c,n;
    printf("Enter the value:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(c=1;c<=n;c++)
        {
            if(i==1||i==n||c==1||c==n)
            {
                printf("$");
            }
            else
            {
                printf(" ");

            }

        }
        printf("\n");
    }
}
