#include <stdio.h>
#include <stdlib.h>

#define Max 5

struct stack
{
    int arr[Max];
    int top;
} st;

void push();
void pop();
void display();

int main()
{
    int choice;

    st.top = -1;

    do
    {
        printf("\n\n\t1. Push an element into stack");
        printf("\n\n\t2. Pop an element from stack");
        printf("\n\n\t3. Display the elements of the stack");
        printf("\n\n\t4. Exit from the program");

        printf("\n\n\tEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            display();
            break;

        case 4:
            exit(0);

        default:
            printf("\n\n\tWrong entry, try again");
        }

    } while (choice != 4);

    return 0;
}

void push()
{
    int item;

    if (st.top == Max - 1)
    {
        printf("\n\n\tThe stack is full / Overflow....");
    }
    else
    {
        printf("\n\n\tEnter the element to be pushed into the stack: ");
        scanf("%d", &item);

        st.top++;
        st.arr[st.top] = item;
    }
}

void pop()
{
    if (st.top == -1)
    {
        printf("\n\n\tStack is Empty / Underflow......");
    }
    else
    {
        int item;

        item = st.arr[st.top];
        st.top--;

        printf("\n\n\tThe popped element is: %d", item);
    }
}

void display()
{
    if (st.top == -1)
    {
        printf("\n\n\tThe stack is empty......");
    }
    else
    {
        printf("\n\n\tThe contents of the stack are:\n");

        for (int i = st.top; i >= 0; i--)
        {
            printf("%d\t", st.arr[i]);
        }
    }
}