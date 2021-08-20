
/*

PRAC-3B  Write a program to implement priority queue using an array.

*/

#include <stdio.h>

struct data         // Creating a structure having value and priority
{
    int value;
    int priority;
}a[5],temp;

int rear=-1,front=-1;

int Insert()        // Insert Function
{
    if (front==-1)
    {
        rear++;
        front++;
        printf("Enter the value:\n");
        scanf("%d",&a[rear].value);
        printf("Enter the priority:\n");
        scanf("%d",&a[rear].priority);
        rear++;
    }
    else if (rear==5)
    {
        printf("Queue is full\n");
    }
    else
    {
        printf("Enter the value:\n");
        scanf("%d",&a[rear].value);
        printf("Enter the priority:\n");
        scanf("%d",&a[rear].priority);
        rear++;
    }
}

int Remove()        // Remove Function
{
    if (rear==front)
    {
        printf("Queue is empty\n");
    }

    else
    {
        int max=a[front].priority,t=front;
        for (int i =front+1;i<rear;i++)
        {
                if (max>a[i].priority)
                {
                    max=a[i].priority;
                    t=i;
                }
        }
        for (int i=t;i>front;i--)
        {
            temp=a[i];
            a[i]=a[i-1];
            a[i-1]=temp;

        }

        printf("%d\n",a[front].value);
        front++;
        if (front==5)
        {
            front=-1;
            rear=-1;
        }
    }
}

int Display(int x)      // Display Function
{

    int i;
    if (front==rear)
    {
        printf("Queue is empty\n");
    }
    else
    {
        int j;
        for (j=1;j<=x;j++)
        {
            for(i=front;i<rear;i++)
            {
                if (a[i].priority==j)
                printf("%d\n",a[i].value);
            }
        }
    }

}

int main()
{
    int n;
    printf("Enter no of priorities:\n");
    scanf("%d",&n);
    printf("\n");
    label:
    printf("Enter 1 to Insert\n");
    printf("Enter 2 to Remove\n");
    printf("Enter 3 to Display\n");
    printf("Enter 4 to Exit\n");
    int choice;
    scanf("%d",&choice);
    printf("\n");
    if (choice==1)
    {
        Insert();
        goto label;
    }
    else if (choice==2)
    {
        Remove();
        goto label;
    }
    else if (choice==3)
    {
        Display(n);
        goto label;
    }
}


/*

INPUT/OUTPUT


Enter no of priorities:
3

Enter 1 to Insert
Enter 2 to Remove
Enter 3 to Display
Enter 4 to Exit
1

Enter the value:
1
Enter the priority:
3
Enter 1 to Insert
Enter 2 to Remove
Enter 3 to Display
Enter 4 to Exit
1

Enter the value:
2
Enter the priority:
3
Enter 1 to Insert
Enter 2 to Remove
Enter 3 to Display
Enter 4 to Exit
1

Enter the value:
3
Enter the priority:
2
Enter 1 to Insert
Enter 2 to Remove
Enter 3 to Display
Enter 4 to Exit
1

Enter the value:
4
Enter the priority:
2
Enter 1 to Insert
Enter 2 to Remove
Enter 3 to Display
Enter 4 to Exit
1

Enter the value:
5
Enter the priority:
1
Enter 1 to Insert
Enter 2 to Remove
Enter 3 to Display
Enter 4 to Exit
3

5
3
4
1
2
Enter 1 to Insert
Enter 2 to Remove
Enter 3 to Display
Enter 4 to Exit
2

5
Enter 1 to Insert
Enter 2 to Remove
Enter 3 to Display
Enter 4 to Exit
3

3
4
1
2
Enter 1 to Insert
Enter 2 to Remove
Enter 3 to Display
Enter 4 to Exit
2

3
Enter 1 to Insert
Enter 2 to Remove
Enter 3 to Display
Enter 4 to Exit
3

4
1
2
Enter 1 to Insert
Enter 2 to Remove
Enter 3 to Display
Enter 4 to Exit
2

4
Enter 1 to Insert
Enter 2 to Remove
Enter 3 to Display
Enter 4 to Exit
3

1
2
Enter 1 to Insert
Enter 2 to Remove
Enter 3 to Display
Enter 4 to Exit
2

1
Enter 1 to Insert
Enter 2 to Remove
Enter 3 to Display
Enter 4 to Exit
3

2
Enter 1 to Insert
Enter 2 to Remove
Enter 3 to Display
Enter 4 to Exit
2

2
Enter 1 to Insert
Enter 2 to Remove
Enter 3 to Display
Enter 4 to Exit
3

Queue is empty
Enter 1 to Insert
Enter 2 to Remove
Enter 3 to Display
Enter 4 to Exit
4

*/
