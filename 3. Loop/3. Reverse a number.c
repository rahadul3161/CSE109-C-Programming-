//3. Write a C program to enter a number and print its reverse.

#include <stdio.h>
int main(){
  int num, r=0;
  printf("Enter a number to reverse: ");
  scanf("%d",&num);

  while (num!=0){
    r = r*10;
    r = r+num%10;
    num = num/10;
  }
  printf("Reverse of the number is: %d",r);
  return 0;
}