#include<stdio.h>
void fibo(int n,int a, int b){
    int temp=a;
    if(n==0)return;
    printf("%d ",a);
    a=a+b;
    b=temp;
    fibo(n-1,a,b);
    return ;
}
int main(){
    int n;
    printf("Enter the value of n :\n");
    scanf("%d",&n);
    fibo(n,1,0);
    return 0;
}