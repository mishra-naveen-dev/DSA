#include<stdio.h>
int main()
{
    int r,s,a;
    printf("EnterTheAge:");
    scanf("%d%d%d",&r,&s,&a);
    if(r<s&&r<a)
    {
        printf("Ram IsSmaller");
    }
    else if(s<r&&s<a)
    {
        printf("ShyamIsSmaller");
    }
    else
    {
        printf("AjayIsSmaller");
    }
    return 0;
}
