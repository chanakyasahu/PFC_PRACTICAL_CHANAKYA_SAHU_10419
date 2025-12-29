#include<stdio.h>
int main() {
    // Practical 10: Q.3. Row wise sum of 2D array
    //Chanakya Sahu
    //ERP - 10419
    int r, c;
    printf("Enter nuber of rows and columns ");
    scanf("%d %d", &r, &c);
    int arr[r][c];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i=0; i<r; i++){
        int sum=0;
        for(int j=0; j<c; j++){
            sum +=arr[i][j];
        }
        printf("Sum of row %d is %d\n", i+1, sum);
    }
    return 0;

}