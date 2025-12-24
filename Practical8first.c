#include<stdio.h>
//Practical 8: Q.1. write function sumOfDigits that taken as input and return sum of its digits//
int sumOfDigits(int n){
    int sum=0;
    while(n!=0){
        int a=n%10;
        sum=sum+a;
        n=n/10;
    }
    return sum;
}
int main(){
    int n;
    scanf("%d",&n);
    int result=sumOfDigits(n);
    printf("%d",result);
    return 0;
    
}