#include<stdio.h>
#include<string.h>
void reverse(char *str, int index){
    if(index<0) return;
    printf("%c",str[index]);
    reverse(str,index-1);
    return;
}
int main(){
    int n;
    printf("Enter the length of string :\n");
    scanf("%d",&n);
    printf("Enter the string :\n");
    getchar();
    char str[100];
    gets(str);
    printf("String after reversing :\n");
    reverse(str,n-1);
    return 0;
}