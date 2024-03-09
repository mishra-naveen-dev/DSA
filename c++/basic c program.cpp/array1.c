
#include<stdio.h>
int main()
{
    int i,sum;
    float avg;
   int arr[]={1,2,3,4,5};
    sum=0;
    for(i=0;i<=4;i++)
    {
       sum=sum+arr[i];
         }
          printf("%d\n",sum);

   avg = sum/5.0;
   printf("%f",avg);
   return 0;
}
