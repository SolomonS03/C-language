#include<stdio.h>
int main(){
  int age,ticket_price,day;
  printf("Enter your age: ");
  scanf("%d",&age);
  printf("Enter the Day (sunday=1....wednesday=4): ");
  scanf("%d",&day);

  if(age<12){
   ticket_price=100;
  }
  else if(12<=age&&age<=60){
   ticket_price=150;
  }
  else{
   ticket_price=120;
  }

  if(day==4){
    ticket_price -=20;
  }

  printf("Your ticket price is: Rs..%d",ticket_price);
  return 0;
}
