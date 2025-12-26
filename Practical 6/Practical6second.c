#include <stdio.h>
int main() {
    //Practical 6 : Q.2.Sum of Even Numbers//
    //Chanakya Sahu
    //ERP - 10419
    int n;
    int sum=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        if(i%2==0){
            sum += i;
        }
    }
        printf("Even sum is: %d\n", sum);
        return 0;
    }
//Output//

//PS C:\Users\chana\OneDrive\Desktop\C Pactical> cd "c:\Users\chana\OneDrive\Desktop\C Pactical\Practical 6\" ; if ($?) { gcc Practical6second.c -o Practical6second } ; if ($?) { .\Practical6second }
//Enter a number: 10
//Even sum is: 30
//PS C:\Users\chana\OneDrive\Desktop\C Pactical\Practical 6> 