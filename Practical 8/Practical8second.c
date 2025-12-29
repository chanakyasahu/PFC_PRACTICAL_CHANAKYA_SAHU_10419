#include<stdio.h>
//Practical 8:Q.2. Swap 2 number using pass by reference//
//Chanakya Sahu
//ERP - 10419
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a=5,b=3;
    swap(&a,&b);
    printf("after swapping a=%d and b=%d",a,b);
    return 0;
}

//Output//

//PS C:\Users\chana\OneDrive\Desktop\C Pactical> cd "c:\Users\chana\OneDrive\Desktop\C Pactical\Practical 8\" ; if ($?) { gcc Practical8second.c -o Practical8second } ; if ($?) { .\Practical8second }
//after swapping a=3 and b=5
//PS C:\Users\chana\OneDrive\Desktop\C Pactical\Practical 8> 