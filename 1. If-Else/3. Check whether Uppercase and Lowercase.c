// check whether uppercase or lowercase
#include<stdio.h>
int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);

    if (ch>= 65 && ch<=90){
        printf("%c It is an uppercase Alphabet",ch);}
    else if (ch>= 97 && ch<=122){
        printf("%c It is an Lower Alphabet",ch);}

    return 0;
}
