#include <stdio.h>
int powerfun(int num, int r) {
   int c, res = 1;
 
   for (c = 1; c <= r; c++) 
   {
      res = res*num;
   }

   return res;   
}
int isArmstrong(int number){
int keepNumber=number;
int sum=0;
int l;
int r;
int temp=number;
int digits=0;
   while (temp != 0) {
      digits++;
      temp = temp/10;
   }
while(number>0){
r=number%10;
sum=sum+powerfun(r,digits);
number=number/10;
}

if(keepNumber==sum)  {
    
    return 1;
}else return 0;
}



int isPalindrome(int number) {
int temp=number;
int r=0;
while(number>0){
    r=r*10;
  r=r+ number%10;
number=number/10;
}
if(r==temp){
    return 1;
}else return 0;

}
