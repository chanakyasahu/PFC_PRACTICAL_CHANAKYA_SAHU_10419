#include<stdio.h>
//Practical 8:Q.3. write a function to print a right angle triagle of stars of height n.//
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