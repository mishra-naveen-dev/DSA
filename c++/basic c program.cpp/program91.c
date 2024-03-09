
#include<stdio.h>
int main ()
{//question12
    int  n,rev,i;
    int orgn;
    printf("Entwer the value :");

    scanf("%d",&n);
    orgn=n;
    rev=0;
    while(n!=0){
        rev=rev*10;
        rev=rev+(n%10);
        n=n/10;
        }
        //printf("%d",n);
    if(orgn==rev){
        printf("\n This no. palindoman:%d",rev);

    }
    else{
        printf("\n this  is not a panildomaic no.:%d",rev);
    }
    return 0;
}
