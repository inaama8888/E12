#include <stdio.h>
#include "NumClass.h"
#include<math.h>
int main(){
int number1, number2;
int dollars;
printf("Enter tow numbers: ");
scanf("%d %d",&number1,&number2 );

int a=isPrime(number1);
if(number1>number2){
    int temp=number1;
    number1=number2;
    number2=temp;
}
    printf("The Armstrong numbers are:");
    for(int i=number1;i<=number2;i++){
        if(isArmstrong(i)==1){
            printf(" %d", i);
        }
    }
    printf("\nThe Palindromes are:");
    for(int i=number1;i<=number2;i++){
       if(isPalindrome(i)==1){
           printf(" %d", i);
        }
   }
   printf("\nThe Prime numbers are:");
    for(int i=number1;i<=number2;i++){
        if(isPrime(i)==1){
            printf(" %d", i);
        }
    }
    
    
    
    printf("\nThe Strong numbers are:");
    for(int i=number1;i<=number2;i++){
        if(isStrong(i)==1){
            printf(" %d", i);
        }
    }
    

return 0;
}