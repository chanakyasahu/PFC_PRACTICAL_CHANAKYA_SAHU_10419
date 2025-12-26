#include<stdio.h>
int main(){
    //Practical 6 : Q.3.ATM Pin Authentication//
    //Chanakya Sahu
    //ERP - 10419
    int pin;
    int attempts=0;
    const int correct_pin = 1704;
    while(attempts<3){
        printf("Enter your 4-digit ATM Pin :");
        scanf("%d",&pin);

        if(pin==correct_pin) {
            printf("Pin is correct. Access granted.\n");
            break;
        }
        else{
            attempts=attempts+1;
            printf("Pin is incorrect. Attempts left : %d\n",3-attempts);
        }
    }
    if(attempts==3){
        printf("Maximum attempts reached. ATM card blocked.\n");
    }
    return 0;
}

//Output//

//PS C:\Users\chana\OneDrive\Desktop\C Pactical> cd "c:\Users\chana\OneDrive\Desktop\C Pactical\Practical 6\" ; if ($?) { gcc Practical6third.c -o Practical6third } ; if ($?) { .\Practical6third }
//Enter your 4-digit ATM Pin :1456
//Pin is incorrect. Attempts left : 2
//Enter your 4-digit ATM Pin :8546
//Pin is incorrect. Attempts left : 1
//Enter your 4-digit ATM Pin :1704
//Pin is correct. Access granted.
//PS C:\Users\chana\OneDrive\Desktop\C Pactical\Practical 6> 