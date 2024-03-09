    #include<stdio.h>
    int main()
    {
        int rev=0,n;
        int orgin;
        printf("Enter the any num which has be rev:");
        scanf("%d",&n);
        orgin=n;
        while(n!=0){
            rev=rev*10;
            rev=rev+(n%10);
            n=n/10;
        }
        if(orgin==rev){
            printf("%d The num is planidrome",orgin);

        }
        else
        {
            printf("%d This is not a planidrome",orgin);
        }
        return 0;
    }

