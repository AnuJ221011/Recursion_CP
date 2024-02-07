#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int  isVowel(char *s, int len){
    if(len==0) {return 0;}
    bool vowel=(s[0]=='a'||s[0]=='e'||s[0]=='i'||s[0]=='o'||s[0]=='u');
    return vowel + isVowel(s+1,len-1);
}
int main(){
    int count=0;
    printf("Enter the string :\n");
    char str[100];
    gets(str);   
    int vowel_count=isVowel(str,strlen(str));
    printf("%d",vowel_count);
    return 0;
}