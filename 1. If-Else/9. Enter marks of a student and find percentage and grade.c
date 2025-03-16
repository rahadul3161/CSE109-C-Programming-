#include <stdio.h>
int main(){
    int ban, phy, chem, bio, math; 
    float sum; 
    printf("Enter five subjects marks: ");
    scanf("%d %d %d %d %d", &ban,&phy,&chem,&bio,&math);

    sum = (ban+phy+chem+bio+math)/5.0;
    printf("Percentage = %.2f\n", sum);

    if(sum >= 90) {
        printf("Grade A");}
    else if(sum >= 80) {
        printf("Grade B");}
    else if(sum >= 70) {
        printf("Grade C");}
    else if(sum >= 60) {
        printf("Grade D");}
    else if(sum >= 40) {
        printf("Grade E");}
    else {
        printf("Grade F");}

    return 0;
}