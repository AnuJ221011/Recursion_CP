#include<stdio.h>
int power(int a, int b, int m){
    if(b==0)return 1;
    if(b==1)return a;
    int temp=power(a,b/2,m);
    if(b%2==1){
        return ((temp%m)*(temp%m)*a)%m;
    }
    else 
        return ((temp%m)*(temp%m))%m;
}
int main(){
    int a,b,m;
    printf("Enter base a:");
    scanf("%d",&a);
    printf("Enter power b:");
    scanf("%d",&b);
    printf("Enter modulo m:");
    scanf("%d",&m);
    int res=power(a,b,m);
    printf("%d",res);
    return 0;
}