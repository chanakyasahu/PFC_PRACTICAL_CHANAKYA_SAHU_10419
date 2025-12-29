#include<stdio.h>
//Practical 8:Q.3. write a function to print a right angle triagle of stars of height n.//
//Chanakya Sahu
//ERP - 10419
int star(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}
int main(){
    int n;
    scanf("%d",&n);
    star(n);
    return 0;
}

//Output//

//PS C:\Users\chana\OneDrive\Desktop\C Pactical> cd "c:\Users\chana\OneDrive\Desktop\C Pactical\Practical 8\" ; if ($?) { gcc Practical8third.c -o Practical8third } ; if ($?) { .\Practical8third }
//5
//*
//**
//***
//****
//*****
//PS C:\Users\chana\OneDrive\Desktop\C Pactical\Practical 8> 