#include<stdio.h>
int main() {
    //Practical 6 : Q.1.Print Numbers in a Range//
    //Chanakya Sahu
    //ERP - 10419
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    for(int i=a; i<=b; i++){
        printf("%d\n", i);
    }
    return 0;
}

//Output//

//PS C:\Users\chana\OneDrive\Desktop\C Pactical> cd "c:\Users\chana\OneDrive\Desktop\C Pactical\Practical 6\" ; if ($?) { gcc Practical6first.c -o Practical6first } ; if ($?) { .\Practical6first }
//Enter first number: 5
//Enter second number: 10
//5
//6
//7
//8
//9
//10
//PS C:\Users\chana\OneDrive\Desktop\C Pactical\Practical 6> 