#include<stdio.h>
int main(){
    //Practical 7 : Q.2.Hourglass of length 2n-1//
    //Chanakya Sahu
    //ERP - 10419
    int n;
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int s=1;s<=2*i-1;s++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=2;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int s=1;s<=2*i-1;s++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

//Output//

//PS C:\Users\chana\OneDrive\Desktop\C Pactical> cd "c:\Users\chana\OneDrive\Desktop\C Pactical\Practical 7\" ; if ($?) { gcc Practical7second.c -o Practical7second } ; if ($?) { .\Practical7second }
//4
//*******
// *****
//  ***
//   *
//  ***
// *****
//*******
//PS C:\Users\chana\OneDrive\Desktop\C Pactical\Practical 7> 