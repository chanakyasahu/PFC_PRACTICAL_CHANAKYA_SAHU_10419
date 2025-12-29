#include<stdio.h>
int main() {
    //Practical 9: Reverse an array//
    //Chanakya Sahu 
    //ERP - 10419
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Original Array: ");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\nReversed Array: ");

    for(int i=n-1; i>=0; i--){
        printf("%d ", arr[i]);
    }
    return 0;
}
