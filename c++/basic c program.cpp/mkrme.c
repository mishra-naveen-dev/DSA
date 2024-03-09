#include<stdio.h>
#include<conio.h>
void xyz(int *x)
{
    *x=78;
}
int main()
{
    int n=90;
    xyz(&n);

    printf("value of n=%d",n);

}
