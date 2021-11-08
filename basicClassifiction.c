#include <stdio.h>
#include <math.h>
#include "NumClass.h"
int isPrime(int number){
int x=number;
    double  result = sqrt(x);
    int someInt = (int)result;
    

    for (int i=someInt;i>1;i--){
        if (number%i==0){
            return 0;
         }
         
    }
     return 1;


}
int fectorial(int number){
    int fact=1;
    int i;
    for(i=1;i<=number;i++){    
      fact=fact*i;  
    }
    return   fact;
}
int isStrong(int number){
int num= number;
int schom=0;
while(num>0){
    int n=num%10;
    if(n>0){
   
    
    schom=fectorial(n)+schom;
    }
num=num/10;
}
if(schom==number){
    return 1;

}
else return 0;
}

