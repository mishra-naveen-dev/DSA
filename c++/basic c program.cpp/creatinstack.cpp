#include<stdio.h>
int max_size=8;
int stack[8];
int top=-1;
int ismpty(){
    if(top==-1)
        return 1;
    else
        return 0;
    int isFull(){
    if(top==max size)
        return 1;
        else
            return 0;
    }
    int pack(){
    return stack[top];}
    int pop(){
        int data;
        if(is empty())
        {
            data=stack[top];
            top=top-1;
            return data;

        }
        else{
            printf("could not return data , stack is empty\n");

        }
        int push(int data){
        if(is full)
            {
                top=top+1;
                stack[top]=data;

            }
            else{
                printf("Could not insert data stack is full\n");

            }
        }
    }
}
int main()
{
    push(3);
    push(9);
    push(1);
    push(12);
    push(15);
    printf("Element at top of the stack %d\n");
    push();
    printf("element:\n");
    while(is empty()){
        int data=pop();
        printf("%d\n",data);

    }
    printf("stack full%s\n",is full()"true","flase");
    printf("Stack empty:%s \n",is empty() "true","false");
    return 0;
}
