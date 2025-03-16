// check whether it is alphabet, digit, or special character
#include<stdio.h>
int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);

    if (ch>= 65 && ch<=90){
        printf("%c It is an uppercase Alphabet",ch);}
    else if (ch>= 97 && ch<=122){
        printf("%c It is an Lower Alphabet",ch);}
    else if (ch>=48 && ch<=57){
        printf("%c It is a Number",ch);}
    else if((ch>=0  && ch<=47) &&
            (ch>=58 && ch<=64) &&
            (ch>=91 && ch<=96) &&
            (ch>=123 && ch<=127)){
        printf("%d It is a special character",ch);}

    return 0;
}
