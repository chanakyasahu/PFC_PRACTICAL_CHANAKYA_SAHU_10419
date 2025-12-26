#include<stdio.h>
int main(){
    //Practical 7: Q.3.pattern//
    //Chanakya Sahu
    //ERP - 10419
    int n;
    scanf("%d",&n);
    char ch='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
        ch='A';
    }
    return 0;
}

//Output//
//PS C:\Users\chana\OneDrive\Desktop\C Pactical> cd "c:\Users\chana\OneDrive\Desktop\C Pactical\Practical 7\" ; if ($?) { gcc Practical7third.c -o Practical7third } ; if ($?) { .\Practical7third }
//4
//A 
//A B
//A B C
//A B C D
//PS C:\Users\chana\OneDrive\Desktop\C Pactical\Practical 7>