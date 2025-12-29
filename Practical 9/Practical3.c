#include<stdio.h>
int main() {
    //Practical 9: Q.3. Sum of all even elements in an array//
    //Chanakya Sahu
    //ERP - 10419
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    for(int i=0; i<n; i++){
        if(arr[i] % 2 == 0){
            sum += arr[i];
        }
    }
    printf("Sum of all even elements is %d\n", sum);
    return 0;
}

//Output//

/*PS C:\Users\chana\OneDrive\Desktop\C Pactical> cd "c:\Users\chana\OneDrive\Desktop\C Pactical\Practical 9\" ; if ($?) { gcc Practical3.c -o Practical3 } ; if ($?) { .\Practical3 }
Enter the size of the array: 5
1 5 2 4 9
Sum of all even elements is 6
PS C:\Users\chana\OneDrive\Desktop\C Pactical\Practical 9>*/