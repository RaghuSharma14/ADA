// bianry search with function

#include <stdio.h>
int Binary(int arr[], int start, int end, int key){
   while (start <= end){
      int mid = start + (end- start)/2;
      if (arr[mid] == key)
         return mid;
      if (arr[mid] < key)
         start = mid + 1;
      else
         end = mid - 1;
   }
   return -1;
}
int main(void){
    int n;
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
    
    int start =0;
    int end = n-1;
    int result = Binary(arr, start, end , key);
    if(result == -1 ) {
      printf("Element not found in the array ");
    }
    else {
      printf("Element found at index : %d",result+1);
   }
   return 0;
}

//OUTPUT:
Enter size of array :6
Enter elements of array :
arr[0]: 4
arr[1]: 2
arr[2]: 1
arr[3]: 6
arr[4]: 8
arr[5]: 0
Enter the element to be found! :8
Element found at index : 5
