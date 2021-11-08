#include <stdio.h>
#include <math.h>
int numOfNumber(int number){
    int n=number;
    int count=0;
    while(n!=0){
        n=n/10;
       count++;
    }
    return count;
}
int polindromRecorsiv(int number){
int numOfDigit=numOfNumber(number)-1;
if(number==0)
return 0;
else{
return (((number%10 * pow(10, numOfDigit)) + polindromRecorsiv(number/10)));

}
}
int isPalindrome(int number){
    if(polindromRecorsiv(number)==number){
        return 1;

    }
    else{
        return 0;
    }

}
int isArmstrongRecorsiv(int number,int exm){
if(number>0)
{
int nuPow=number%10;
return (pow(nuPow,exm)+isArmstrongRecorsiv(number/10, exm));
}
 return 0;

}
int isArmstrong(int number){
    int digit=numOfNumber(number);
    if(isArmstrongRecorsiv(number,digit)==number){
        return 1;
    }
    else return 0;
}





