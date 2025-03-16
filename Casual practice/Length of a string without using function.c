#include <stdio.h>
int main() {
    char s[]="Rahadul Riyad";
    int len=0;
    for (int i=0; s[i]!='\0'; i++){
        len++;
    }
    printf("Length of the string is: %d",len);
}
