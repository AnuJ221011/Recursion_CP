#include<stdio.h>
int binary(int n){
    int temp=n/2;
    if(temp==2)printf("0");
    if(temp==3)printf("1");
    if(n/2==1){ printf("1");
    return 0;
    }
    binary(temp);
    printf("%d",n%2);
    return 0;
}
int main(){
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    binary(n);
    return 0;
}