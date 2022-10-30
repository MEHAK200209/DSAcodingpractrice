// Operations on Stack
#include<stdio.h>
int top,Stack[100],n,x,i,choice;
void push(){
    if(top>=n-1)
        printf("Stack Overflow");
    else
        printf("Enter the element to enter : ");
        scanf("%d", &x);
        top++;
        Stack[top]=x;
}
void pop(){
    if(top<=-1)
        printf("Stack Underflow");
    else    
        printf("Popped elememt is %d",Stack[top]);
        top--;
}
void display(){
    if(top>=0){
        printf("The elemets of stack are\n");
        for(i=top;i>=0;i--)
            printf("%d\n",Stack[i]);
    }
    else
        printf("Stack is empty");
}
int main(){
    top=-1;
    printf("Enter the size of Stack : ");
    scanf("%d", &n);
    printf("Select the operation to perform\n");
    printf("1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT");
    do{
        printf("\nEnter choice : ");
        scanf("%d", &choice);
        switch(choice){
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
                printf("EXIT");
                break;
            default:
                printf("Please select a valid choice\n");
        }
    }while(choice!=4);
return 0;
}


