#include<stdio.h>
int main()
{

    //  int arr[5]={1,2,3,4,5,7};
    /*  for( int i=0;i<5;i++)
      {

          printf("%d",arr[i]);
      }*/


       int arr[5], size, i, average,sum = 0, temp=0,arr[0],arr[4];
     /*  printf("Enter array size\n");
    scanf("%d",&size);*/

       printf("Enter array elements\n");
    for(i = 0; i < 5; i++)
          scanf("%d",&arr[i]);
           for(i = 0; i < 5; i++)
          sum = sum + arr[i];                       //  sum += arr[i];


    printf("Sum of the array = %d\n",sum);
     average = sum/5;
     printf("average of array=%d",average);

     temp=arr[0];
     arr[0]=arr[4];
     arr[4]=temp

     printf(" after swapping:%d",)


    return 0;




}
