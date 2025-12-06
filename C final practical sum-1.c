// Finding a triangular number:-
#include<stdio.h>
int is_triangular(int n, int i, int sum){
    if(sum == n) return 1;
    if(sum > n || i > n) return 0;
    return is_triangular(n, i+1, sum+i);
}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    if(is_triangular(n,1,0)) printf("\n%d is a Triangular number",n);
    else printf("%d is not a triangular number",n);
    return 0;
}
