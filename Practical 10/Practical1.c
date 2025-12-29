#include <stdio.h>
int main() {
    //Practical 10: Q.1. Max and min element of a 2D array//
    //Chanakya Sahu
    //ERP - 10419
    int rows, cols;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    int arr[rows][cols];
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    int max=arr[0][0];
    int min=arr[0][0];
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(arr[i][j]>max)
                max=arr[i][j];
            if(arr[i][j]<min)
            min=arr[i][j];
        }
    }
    printf("Maximum elemnt is %d\n", max);
    printf("Minimum element is %d\n", min);
    return 0;
}