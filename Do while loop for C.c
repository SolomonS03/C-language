// Loops

// Do while loop

#include<stdio.h>
int main(){
  /*int i = 0;
  do{
    printf("%d\n",i);
    i++;
  }
   while(i<5);
  return 0;*/


  //If the condition is false from the start
  /*int i= 10;
  do{
     printf("i is %d\n",i);
     i++;
     }
  while(i<5);
  return 0;*/

  //Practical example for getting a +ve number untill the user enters 0 or a -ve number
  int num;
  do{
    printf("Enter a positive number: ");
    scanf("%d",&num);
  }
  while(num>0);
  return 0;
}
