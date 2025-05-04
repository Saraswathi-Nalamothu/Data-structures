#include<stdio.h>
void SelectionSort(int arr[],int len);
void BubbleSort(int arr[],int len);
void InsertionSort(int arr[],int len);

int main(){
    int length;
    printf("Enter the size of the Array");
     scanf("%d",&length);
     int array[length];
     printf("Enter the %d numbers ",length);
     for(int i =0;i<length;i++){
        scanf("%d",&array[i]);
     }

    int choice;

do{
    printf("MENU CARD\n");
    printf("1.Bubble Sort\n");
    printf("2. Selection Sort\n");
    printf("3. Insertion Sort\n");
    printf("4. Exit\n");
    printf("Enter the choice: ");
    scanf("%d",&choice);

switch(choice){
    case 1:
    BubbleSort(array,length);
    break;

    case 2:
    SelectionSort(array,length);
    break;

    case 3:
    InsertionSort(array,length);
    break;

    case 4:
    printf("Program Ended");
    break;
    default :
    printf("Enter valid number\n\n");


}
}
while(choice!=4);


return 0;
}
// code for Selection Sort
void SelectionSort(int arr[],int len){
    for(int i =0;i<len-1;i++){
        int min = i;
        for(int j =i+1;j<len;j++){
            if(arr[min]>arr[j]){
                min = j;
            }

        }
        if(arr[min]!= arr[i]){
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
    for(int i =0;i<len;i++){
        printf("%d\t",arr[i]);
    }
     printf("\n\n");
}

// code for Bubble Sort
void BubbleSort(int arr[],int len){
    for(int i =0;i<len-1;i++){
        for(int j=0;j<len-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i =0;i<len;i++){
        printf("%d\t",arr[i]);
    }
     printf("\n\n");
}

// code for Insertion Sort
void InsertionSort(int arr[],int len){
    for(int i =0;i<len;i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0&& arr[j]>key){
            arr[j+1]= arr[j];
           j = j-1;}
         arr[j+1]= key;
        
    }
    for(int i =0;i<len;i++){
        printf("%d\t",arr[i]);
    }
     printf("\n\n");



}





// program for search - binary and linear
#include<stdio.h>
#include "sort.h"

int  LinearSearch(int arr[],int len,int target);
int BinarySearch(int arr[],int size,int target );
int main(){
     int length;
     int target;
     printf("Enter the size of the Array");
     scanf("%d",&length);
     int array[length];
     
     printf("Enter the %d numbers ",length);
     for(int i =0;i<length;i++){
        scanf("%d",&array[i]);
     }
     printf("Enter the number to search in the array");
     scanf("%d",&target);
     int choice;int result ;

do{
    printf("MENU CARD\n");
    printf("1.Binary search\n");
    printf("2. Linear search\n");
    printf("3. Exit\n");
    printf("Enter the choice: ");
    scanf("%d",&choice);

switch(choice){
    case 1:
    SelectionSort(array,length);
     result = BinarySearch(array,length,target);
     if( result !=-1){
        printf("The given number found\n");
        printf("The index of the number is %d\n\n",result);

    }
    else
    printf("The number is not found\n\n");

    break;

    case 2:
     result = LinearSearch(array,length,target);
     if(result == 1){
        printf("Number found\n\n");
     }
     else {
        printf("Number is not found\n\n");
     }
    break;

    case 3:
    printf("Program Ended");
    break;
    default :
    printf("Enter valid number\n");


}
}
while(choice!=3);

    return 0;}

// code for Linear Search
    int  LinearSearch(int arr[],int len,int target){
        for(int i =0;i<len;i++){
            if(arr[i]== target){
                return 1;
            }
        }
        return 0;
    }

// code for Binary Search
int BinarySearch(int arr[],int size,int target ){
    int left = 0;
    int right = size-1;
    while(left<=right){
        int middle = (left+right)/2;
        if(arr[middle]==target){
            return middle;
        } 
        if(arr[middle]<target){
            left = middle +1;
        }
        if(arr[middle]>target){
            right = middle-1;
        }
    }
    return -1;

}

    



