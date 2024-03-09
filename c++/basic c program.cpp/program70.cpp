//Question12ASS
#include<stdio.h>
#include<math.h>
int main()
{
    int l,b,area,peri;
    printf("EnterTheValues:");
    scanf("%d%d",&l,&b);
    area=l*b;
    peri=2*(l+b);
    printf("\nAreaOfRectangle:%d",area);
    printf("\nPerimeterOfRectangle:%d",peri);
    if (area>peri)
    {
      printf("\nYES!AREAIsGreaterThanPerimeter");
    }
    else
    {
        printf("\nNo!PerimeterIsSmallerThanArea");
    }
    return 0;
}
