#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i;
    int *p=(int*)malloc(sizeof(int)*10);
    for(i=0;i<=9;i=i+2)
    {
        printf("enter the value of%u address =",(p+i));
        scanf("%d",(p+i));
        *(p+i+1)=*(p+i);
    }
    for(i=0;i<=9;i++){
        printf("\n value of %u addres=%d",(p+i),*(p+i));
}
}
