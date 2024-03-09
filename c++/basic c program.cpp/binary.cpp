#include<stdio.h>
int main()
{
    int i,arr[10],search,first,last,middle;
    printf("Enter 10 elements array\n");
    for(i=0;i<=10;i++)

        scanf("%d",&search);

    first=0;
    last=9;
    middle=(first+last)/2;
    while(first<=last)
    {

        if(arr[middle]<search)
            first=middle+1;
        else if(arr[middle]==search)


{
    printf("Greater a search no.",search);
    printf("\nThe number is %d found at position %d ",search,middle);
    break;
}
else{
    last=middle-1;
    middle=(first+last)/2;
}
if(first>last)
{
    printf("\n The  number is %d is not found is given array ",search);
}
}
}
