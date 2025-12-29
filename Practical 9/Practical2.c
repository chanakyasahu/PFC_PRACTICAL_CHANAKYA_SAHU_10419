#include<stdio.h>
int main() {
   //Practical 9: Q.2. Max and min element of an array//
   //Chanakya Sahu
   //ERP - 10419
   int n;
   printf("Enter the size of the array: ");
   scanf("%d", &n);
   int arr[n];
   for(int i=0; i<n; i++){
       scanf("%d", &arr[i]);
   }
   int max = arr[0];
   int min = arr[0];
   for(int i=1; i<n; i++){
       if(arr[i] > max){
           max = arr[i];
       }
       if(arr[i] < min){
           min = arr[i];
       }
   }
   printf("Maximum element is %d\n", max);
   printf("Minimum element is %d\n", min);
   return 0;
}

//Output//

/*PS C:\Users\chana\OneDrive\Desktop\C Pactical> cd "c:\Users\chana\OneDrive\Desktop\C Pactical\Practical 9\" ; if ($?) { gcc Practical2.c -o Practical2 } ; if ($?) { .\Practical2 }
Enter the size of the array: 5
1 3 5 4 9
Maximum element is 9
Minimum element is 1
PS C:\Users\chana\OneDrive\Desktop\C Pactical\Practical 9>*/