#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int a[3][3],b[3][3],c[3][3],i,j;
    printf("Enter 9 value a[3][3]\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }

    }
    printf("\nEnter 9 value b[3][3]\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d\t",&b[i][j]);
        }
    }
    printf("\nAddtition=c[3][3]\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=a[i][j] + b[i][j];
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    getch();
}
