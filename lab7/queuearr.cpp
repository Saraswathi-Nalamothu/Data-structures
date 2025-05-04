#include<cstdio>
#define max 5

class queue{
    int arr[max];
    int front;
    int rear;
    public: 
queue(){
        rear =-1;
        front = -1;
    }
int enqueue(int);
int dequeue();
void display();
int peek();
};
int main(){
    queue obj;
    int choice,result,value;
    do{
        printf("\n===Queue Menu===\n");
        printf("Enter 1 : To push the element into the Queue\n");
        printf("Enter 2 : To pop the element from the Queue\n");
        printf("Enter 3 : To peek the element in the Queue\n");
        printf("Enter 4: To display the Queue\n");
        printf("Enter 5 : Exit the program\n");
        printf("enter the choice: ");
        scanf("%d",&choice);
    switch(choice){
        case 1:
        printf("Enter the value: ");
        scanf("%d",&value);
        obj.enqueue(value);
        break;
        case 2:
        value = obj.dequeue();
        if(value!= 0){
            printf("The element dequeue is %d",value);
        }
        break;
        case 3:
        value =obj.peek();
        if(value!= 0){
            printf("The element at the fornt  is %d",value);
        }
        break;
        case 4:
        obj.display();
        break;
        case 5:
        printf("program Ended\n");
        break;
        default:
        printf("Invalid choice\n");
        printf("Enter the choice between 1 to 5\n");

    }}
    while(choice !=5);


}
// Function to enqueue a element
int queue :: enqueue(int value){
    if(rear==max-1){
        printf("The queue is overflow\n");
        return 0;
    }
if(front ==-1 && rear==-1){
    rear++;
    front ++;
    arr[rear]=value;
    return 0;
}
rear++;
arr[rear]=value;
return 0;
}

// Function to dequeue a element
int queue :: dequeue(){
    if(front==-1 && rear==-1){
        printf("The queue is empty\n");
        return 0 ;
    }
    if (rear==front){
        int result = arr[front];
        front=-1;
        rear =-1;
        return result;
    }
    int result = arr[front];
    front ++;
    return result;
}

// Function to Display the first element
int queue :: peek(){
    if(front==-1 && rear==-1){
        printf("The queue is empty\n");
        return 0 ;
    }
    return arr[front];

}