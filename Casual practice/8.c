#include <stdio.h>
int counter = 0;  
void incrementCounter() {
    int localCounter = 0;  
    localCounter++;
    counter++;  
    printf("Local counter inside function: %d\n", localCounter);
    printf("Global counter inside function: %d\n", counter); }
int main() {
    printf("Global counter before function calls: %d\n", counter);
    incrementCounter();
    incrementCounter();
    printf("Global counter after function calls: %d\n", counter);
    return 0;
}
