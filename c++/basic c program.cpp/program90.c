#include<stdio.h>
int main()
{
   //int n,revserse;
   float n,revserse;
   revserse=0;
//scanf("%d",&n);
scanf("%f",&n);//11
   while(n!=0)
   {
      // revserse=revserse*10;
      revserse=revserse+(n%10);
      n=n/10;
   }


      // printf("%d Revserse",revserse);
          printf("%d Revserse",revserse);
   return 0;
}
