#include<stdio.h>
void printalphabet(){
    int n;
    printf("Enter the limit: ");
    scanf("%d", &n);
    if(n>0 && n<= 26){
       for(int i = 0; i < n; i++){
           printf("%c ", 'a' + i);
       }
    }
}

int main(){
    printalphabet();
    return 0;
}
