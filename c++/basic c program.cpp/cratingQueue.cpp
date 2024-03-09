#include<stdio.h>
int array[max];
int front=0;
int rear=-1;
int item count=0;
int peek()
{
    return int array[front];
    bod is empty()
    {
        return item cout==0;

    }
    bod is full()
    {
        return item count==max;
    }
    int size()
    {
        return item count;
    }
    void insert(int data)
    {
        if(! is full())
        {
            if(rear==ma-1)
            {
                rear=-1;
            }
            int array[++rear]=data;
            item count++;
        }

    }
    int data()
    {
        int data=int Array[front++];
        if(from==max)
    {
            front=0;
    }

        item count--;
        return data;
    }

}
int main()
{
    insert(3)
}
