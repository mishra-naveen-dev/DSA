#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,temp;
    int sum=0;
    printf("EnterTheNumber=");
    scanf("%d",&n);
    temp=n;
    while(n>0)
     {
         r=n%10;
         sum=(sum*10)+r;
         n=n/10;
     }
     if(temp==sum)
     {
         printf("Palindrome number");
     }
     else
     {
         printf("NotPalindrame");
     }
     return 0;
}
