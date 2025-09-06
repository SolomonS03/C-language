#include<stdio.h>
int main(){
  int i,n,max;
  printf("Enter 10 numbers:\n ");
  scanf("%d",&max);

  for(i=1;i<10;i++){
   scanf("%d",&n);
   if(n>max){
     max = n;
   }
  }
  printf("The maximum number is: %d ",max);
  return 0;
}
