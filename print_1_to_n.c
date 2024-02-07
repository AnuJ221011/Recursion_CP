#include<stdio.h>
void print_no(int n){
    if(n==0)return ;
    print_no(n-1);
    printf("%d\n",n);
    return;
}
int main(){
    int n;
    printf("Enter the value of n :\n");
    scanf("%d",&n);
    printf("The no. from 1 to n are:\n");
    print_no(n);
    return 0;
}