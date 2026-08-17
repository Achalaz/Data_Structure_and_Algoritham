#include <stdio.h>
#define SIZE 5
int stack[SIZE];
int top=-1;

void push(int value){
    if(top==SIZE -1){
        printf("Stack is full");
    }else{
        top++;
        stack[top]=value;
    }
}

int main(){
    push(50);
     push(50);
      push(50);
       push(50);
        push(50);
         push(50);
}