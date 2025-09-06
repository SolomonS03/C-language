#include<stdio.h>
int main(){
   int num,a;
   printf("Enter a number: ");
   scanf("%d",&num);

   if(num<=99999 && num>=10000){
      printf("The left most digit is: %d\n",a = num/10000);
      printf("Unit's place is ten thousand");
   }

   else if(num<=9999 && num>=1000){
      printf("The left most digit is: %d\n",a = num/1000);
      printf("Unit's place is thousand");
   }

   else if(num<=999 && num>=100){
      printf("The left most digit is: %d\n",a = num/100);
      printf("Unit's place is hunded");
   }

   else if(num<=99 && num>=10){
      printf("The left most digit is: %d\n",a = num/10);
      printf("Unit's place is tens");
   }

   else if(num<=9 && num>=1){
      printf("The left most digit is: %d\n",num);
      printf("Unit's place is ones");
   }

   return 0;
}
