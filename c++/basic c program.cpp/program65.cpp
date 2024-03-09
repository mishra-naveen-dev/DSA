#include<stdio.h>
int main ()
{
    int gen,age,me;
    printf("EnterTheGender:");
    scanf("%d",&gen);
    printf("\nEnterTheAge:");
    scanf("%d",&age);
    printf("\nEnterTheMe:");
    scanf("%d",&me);
    if (me==1)
    {
        printf("Yes");
    }
    else
    {
        if (gen==1&&age>30)
        {
            printf("Yes");
        }
        else if (gen==0&&age>25)
        {
            printf("Yes");
        }

        else
        {
            printf("No");
        }
    }
    return 0;
}
