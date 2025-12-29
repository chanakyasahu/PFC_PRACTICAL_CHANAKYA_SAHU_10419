#include <stdio.h>
int main() {
    //Practical 10: Q.2. Sum of diagonal element of 2D array
    //Chanakya Sahu
    //ERP - 10419
    int n;
    int sum=0;
    printf("Enter the size of square array: ");
    scanf("%d", &n);
    int arr[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i=0; i<n; i++){
        sum +=arr[i][i];
    }
    printf("Sum of diagonal element is %d\n", sum);
    return 0;
}