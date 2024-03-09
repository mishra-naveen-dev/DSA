#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int ch;
    printf("\nPress 1 for Addition");
     printf("\nPress 2 for Subtraction");
      printf("\nPress 3 for  Multplication");
       printf("\nPress 4 for Division");
       printf("\n press 5 for exit ");
        printf("\nPress 6 for repeat ");
       /*  printf("\nEnter the Value 1:");
         scanf("%d",&a);
          printf("\nEnter the value 2
                 */
          scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            {
            int a,b,c;
                printf("\nEnter the Value 1:");
                scanf("%d",&a);
                printf("\nEnter the value 2:");
                scanf("%d",&b);
                c=a+b;
                printf("\nAddition=%d",c);
             }
        break;
        case 2:
             {
            int a,b,c;
                printf("\nEnter the Value 1:");
                scanf("%d",&a);
                printf("\nEnter the value 2:");
                scanf("%d",&b);
                c=a-b;
                printf("\nSubtraction=%d",c);
             }
        break;
        case 3:
            {
           int a,b,c;
                printf("\nEnter the Value 1:");
                scanf("%d",&a);
                printf("\nEnter the value 2:");
                scanf("%d",&b);
                c=a*b;
                printf("\n multiplication=%d",c);
            }
        break;
        case 4:
            {
         int a,b,c;
                printf("\nEnter the Value 1:");
                scanf("%d",&a);
                printf("\nEnter the value 2:");
                scanf("%d",&b);
                c=a/b;
                printf("\nDivision=%d",c);
             }
        break;
        case 5:
            {
                printf("EXIT");
            }
        }
return 0;
}
