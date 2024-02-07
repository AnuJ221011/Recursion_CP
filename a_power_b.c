#include <stdio.h>
    int power(int a, int b, int m){
        if(b==0) return 1 ;
        return (a % m * power(a,b-1,m))%m;
    }
int main() {
    int a,b,m;
    printf("Enter base:\n");
    scanf("%d",&a);
    printf("Enter power:\n");
    scanf("%d",&b);
    printf("Enter modulo number:\n");
    scanf("%d",&m);
    int p=power(a,b,m);
    printf("Final result is :\n%d",p);
    return 0;
}