#include <stdio.h>

int front = 0, rear = 0;
int queue[10];

void push(int data)
{
    if (rear < 10)
    {
        queue[rear++] = data;
        printf("%d added.\n", data);
    }
    else
    {
        printf("You can't insert more data.\n");
    }
}

void pop()
{
    if (front != rear)
    {
        printf("You removed %d from the queue\n", queue[front++]);
    }
    else
    {
        printf("Queue is empty.\n");
    }
}
int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);
    push(70);
    push(80);
    push(90);
    push(100);
    push(110);
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
    return 0;
}