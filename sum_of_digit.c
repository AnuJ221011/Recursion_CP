#include <stdio.h>
int numb(int x){
    if(x<=9)return x;
    return (x%10)+numb(x/10);
}
int main() {
    int n;
    scanf("%d",&n);
    int add=numb(n);
    printf("%d",add);
    return 0;
}