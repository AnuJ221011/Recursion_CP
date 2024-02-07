#include<stdio.h>
int fact(int n){
    if(n==1){
        return 1;
    }
    return n*fact(n-1);
}
int ncr(int n, int r){
    if(r==0 || r==1)return 1;
    return fact(n)/(fact(r)*fact(n-r));
}
int main(){
    int n,r;
    printf("Enter the value of n :");
    scanf("%d",&n);
    printf("Enter the value of r :");
    scanf("%d",&r);
    int res=ncr(n,r);
    printf("nCr = %d",res);
    return 0;
}