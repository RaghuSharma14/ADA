//with function

// Online C compiler to run C program online
#include <stdio.h>

int linear(int arr[], int n, int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
           return i+1;
        }
    }
    return -1;
}
int main() {
    int n;
    printf("Enter size of array :");
    scanf("%d",&n);
    int arr[50];
    printf("\nEnter elements of array :");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    int key;
    printf("\nEnter the element to be found! :");
    scanf("%d",&key);
    
    int result = linear(arr,7,key);
    if (result == -1)  
     printf("\nElement is not present in the array");  
    else  
     printf("\nElement is present at %d position of array", result);  
    return 0;
}

//OUTPUT:
Enter size of array :6
Enter elements of array :3 5 6 8 0 2 
enter the element to be found! :0
Element is present at 5 position of array


//linear searching without function

#include <stdio.h>
int main() {
    int n,i;
    printf("Enter size of array :");
    scanf("%d",&n);
    int arr[50];
    printf("\nEnter elements of array :\n");
    for(int i=0;i<n;i++){
        printf("arr[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    
    int key;
    printf("\nEnter the element to be found! :");
    scanf("%d",&key);
    
    for (int i=0;i<n;++i){
        if(arr[i]==key){
             printf("\nElement is present at %d position of array", i+1); 
            break;
        }
    }
    if(i==n){
           printf("\nElement is not present in the array");  
        }
    return 0;
}

//OUTPUT:
Enter size of array :7
Enter elements of array :
arr[0]: 4
arr[1]: 3
arr[2]: 1
arr[3]: 6
arr[4]: 8
arr[5]: 9
arr[6]: 5
Enter the element to be found! :8
Element is present at 5 position of array
