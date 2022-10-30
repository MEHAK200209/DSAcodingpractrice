//Queue operations
#include<stdio.h>
#define Max 50
int Queue[Max], rear=-1, front=-1, choice;
void insert_element(){
    int item;
    if(rear>=Max-1)
        printf("Queue Overflow");
    else	
        if(front==-1)
        front=0;
        printf("Inset the element in queue : ");
        scanf("%d", &item);
        rear=rear+1;
        Queue[rear]=item;
}
void delete_element(){
    if (front==-1 || front>rear)
        printf("Queue Underflow"); 
    else
        printf("Element deleted from queue is : %d\n", Queue[front]);
        front=front+1;
}
void display(){
    int i;
    if (front==-1)
        printf("Queue is empty \n");
    else
        printf("Queue is : \n");
        for (i=front;i<=rear;i++)
            printf("%d\t", Queue[i]);
}
int main(){
    printf("Select the operation to perform on Queue\n");
    printf("1.INSERT\n2.DELETE\n3.DISPLAY\n4.EXIT");
    do{
        printf("\nEnter choice : ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                insert_element();
                break;
            case 2:
                delete_element();
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


