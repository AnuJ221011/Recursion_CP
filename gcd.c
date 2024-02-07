#include<stdio.h>
int gcd(int a, int b){
    if(b!=0){
        return gcd(b,a%b);
    }   
    else 
        return a; 
}
int main(){
    int a,b;
    printf("Enter first no :\n");
    scanf("%d",&a);
    printf("Enter second no :\n");
    scanf("%d",&b);
    int res=gcd(a,b);
    printf("The gcd of %d and %d is %d",a,b,res);

    return 0;
}