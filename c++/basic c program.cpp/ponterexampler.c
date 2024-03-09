#include<stdio.h>
#include<conio.h>
void main ()
{
    int  a = 89;
  int *b = &a;
    printf("\n Value of a = %d",b);
    printf("\n Address of a = %u",&a);
    printf("\n Address of a or Value of b = %u",b);
    printf("\n Address of b =%u",&b);
        printf("\n Address of b =%u",*&b);
            printf("\n Address of a =%d",**&b);




    getch ();
}
