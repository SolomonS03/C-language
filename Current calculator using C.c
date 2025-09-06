#include<stdio.h>
int main(){
  //Program for calculating the electricity bill
  int u;
  float charge,surcharge;
  printf("Enter the number of units consumed: ");
  scanf("%d",&u);
  charge = 0.000000;

  if (u<=50){
     charge = u*0.50;
  }
  else if(u>50 && u<=150){
     charge = (50*0.50)+(u-50)*0.75;
  }
  else{
     charge = (50*0.50)+(100*0.75)+(u-150)*1.20;
  }

  surcharge=0.20*charge;
  charge = charge + surcharge;

  printf("The total cost to be paid including 20 percentage of surcharge is: %f",charge);

  return 0;
}
