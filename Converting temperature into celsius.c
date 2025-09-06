#include<stdio.h>
int  main(){
 int temp, celsius;
 printf("Enter the Temperature: ");
 scanf("%d",&temp);
  //If the temp is above 80, then it is in farenheit
  //If it is below 80, then it is in celsius
  if(temp>80){
    celsius = (temp-32)*5/9;
    }

  else{
    celsius = temp;
  }

    if(celsius<=25){
        printf("The temperature is cool");
    }
    else if(celsius>25 && celsius<=50){
        printf("The temperature is medium");
    }
    else{
        printf("The temperature is hot");
    }


 return 0;
}
