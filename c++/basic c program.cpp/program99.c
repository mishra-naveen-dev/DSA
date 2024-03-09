#include<stdio.h>
#include<math.h>
int main()
{
    int num,var,nod,id,i;
    //printf("EntertheNumber:");
    scanf("%d",&num);
    for(i=1;i<=500;i++)
        num =i;
    nod=log10(num)+1;
    var=0;
    while(num!=0)
    {
     id=num%10;
     var=var+pow(id,nod);
     num=num/10;

    }
    if(i==var)
        printf("%d",var);
    return 0;

}
