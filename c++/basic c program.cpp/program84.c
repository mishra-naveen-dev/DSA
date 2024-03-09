#include<stdio.h>
int main ()//question5
{
    int x,y,i;
    int ans;
 printf("EnterTheValue:");
    scanf("%d %d",&x,&y);

    ans=1;
    for(i=1; i<=y; i++)
        ans=ans*x;
    {
        printf("AnswerThatIsCorrect:%d",ans);
    }
    return 0;

}
