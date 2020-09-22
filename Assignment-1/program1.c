// Name - Mananpreet Singh Chhatwal 
// Entry Number - 2020CSZ0008
#include <stdio.h>
#include <math.h>

// Question
// (1) Write a C program to find the average and standard deviation of given any n numbers. 
// The program first ask the user the number n, and then takes n numbers. The program then 
// computes and prints the average and standard deviation of the n numbers. 

int main(void) {
    // Total number of numbers user wants to enter.
    int noOfNumbers;

    printf("Enter an integer: ");
    // Input from user.
    scanf("%d", &noOfNumbers);
    printf("Number = %d \n",noOfNumbers);

    // Float array to hold numbers entered by user.
    float inputNumbers[noOfNumbers];
    for(int i=0; i < noOfNumbers; i++) {
        float input;
        // Input from user.
        scanf("%f", &input);
        inputNumbers[i] = input;
    }
    //Average calculation.
    float sum;
    for(int i=0; i < noOfNumbers; i++) {
       sum = sum + inputNumbers[i];
    }
    float avg = sum/noOfNumbers;
    printf("Average = %f \n", avg);

    // Standard deviation calculation.
    float beforeStandardDeviation = 0.0;
    for(int j=0; j < noOfNumbers; j++) {
        beforeStandardDeviation = beforeStandardDeviation + pow(inputNumbers[j] - avg,2);
    }
    float standardDeviation = sqrt(beforeStandardDeviation/noOfNumbers);
    printf("Standard Deviation =  %f \n", standardDeviation);
}
