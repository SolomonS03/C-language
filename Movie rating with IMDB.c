#include<stdio.h>
int main(){
 float IMDB;
 printf("Enter the IMDB rating of the movie: ");
 scanf("%f",&IMDB);
 if(IMDB<5.0){
   printf("Skip it");
 }
 else if(IMDB<7.0){
   printf("Average");
 }
 else if(IMDB<9.0){
   printf("Good movie");
 }
 else{
   printf("Must watch");
 }
 return 0;
}
