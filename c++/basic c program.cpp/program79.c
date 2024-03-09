#include<stdio.h>
int main ()
//question18
{
    char c;
    int ascii;
    printf("Enter the charcter");
    scanf("%c",&c);
     ascii = c;

    (ascii>=97&&ascii<=122)? printf("Lower Case"):printf("not a lower case");
  return 0;
}
