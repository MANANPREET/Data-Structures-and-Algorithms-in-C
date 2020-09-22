// Name - Mananpreet Singh Chhatwal 
// Entry Number - 2020CSZ0008
#include <stdio.h>

// Question
// (3) In a Fibonacci sequence the sum of two successive terms gives the next term and the first 
// three terms of the Fibonacci sequence are 0,1,1. Write a C function to display the first n numbers 
// of a Fibonacci sequence. Here, n is a positive integer entered through keyboard. 

int main(void) {
    // range of Fibonacci sequence user wants to enter.
    int range;
    long value1 = 0;
    long value2 = 1;
    long nextValue;
    printf("Enter range for Fibonacci Sequence \n");
    // Input from user.
    scanf("%d", &range);
    printf("######### Fibonacci Sequence of first %d numbers ######### \n", range);
    for (int i=0; i < range; i++) {
        printf("%ld \n", value1);
        nextValue = value1 + value2;
        value1 = value2;
        value2 = nextValue;
    }
    printf("#########################################################"); 
}