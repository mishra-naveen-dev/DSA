#include<stdio.h>
#include<math.h>
int main()
{
    int amt;
    int hun,fif,ten;
    printf("EnterTheAmountToWithdrawFromAtm:");
    scanf("%d",&amt);
    hun=amt/100;
    amt=amt%100;
    fif=amt/50;
    amt=amt%50;
    ten=amt/10;
    amt=amt%10;
    printf("hen*%d,fif*%d,ten*%d",hun,fif,ten);
     return 0;

}
