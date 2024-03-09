#include<stdio.h>
#include<limits.h>

int main()
{
   int  min,max,a;
   min=INT_MIN;
   max=INT_MAX;
   while(scanf("%d",&a))

   {
       if(a>max)
       {
            max=a;
       }
     else if(a<min){
       min=a;
}
   }
   printf("%d %d",min,max);
   return 0;

}
