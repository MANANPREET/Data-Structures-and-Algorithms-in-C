// Name - Mananpreet Singh Chhatwal 
// Entry Number - 2020CSZ0008
#include <stdio.h>

// Question
// (2) Write a C function to count and print the number of 1-bits in its integer argument. Again your program should 
// ask the user to enter an integer number. Your program should run correctly regardless of the machine. Hint: The 
// given integer can be a negative number as well. The C programming language uses 2’s complement to represent an integer. 

int main(void) {
    int input;
    int answer = 0;
    printf("Enter integer number \n");
    scanf("%d", &input);

    for (int i = 0 ; i < sizeof(int) * 8; i++) {
        if(input & 1) {
            answer++;
        }
        // We are shifting bits by one position.
        input >>= 1;
    }

    printf("Number of 1 bits = %d \n",answer);
}