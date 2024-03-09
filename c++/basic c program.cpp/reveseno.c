    #include<stdio.h>
    int main()
    {
        int rev=0,n;
        printf("Enter the any nop. which has be rev:");
        scanf("%d",&n);
        while(n!=0){
            rev=rev*10;
            rev=rev+(n%10);
            n=n/10;
        }
        printf("This num which has been reversed :%d",rev);
        return 0;
    }

