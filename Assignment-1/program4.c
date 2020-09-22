// Name - Mananpreet Singh Chhatwal 
// Entry Number - 2020CSZ0008
#include <stdio.h>
#include <math.h>

// Question
// Write a C-program to compute and print the range of the following data types. By range we mean 
// the minimum and the maximum values that can be stored in the variable of the corresponding data type. 
// • char 
// • unsigned char 
// • int 
// • unsigned int 
// • short 
// • unsigned short 

// This function is to print range of Signed data types.
// Range for signed data types = -(2^N-1) to (2^(N-1) - 1)
void getSignedDataTypeRange(int sizeOfDataType) {
    int sizeInBits = sizeOfDataType * 8;
    long min_size = - pow(2,sizeInBits - 1);
    long max_size = pow(2,sizeInBits - 1) - 1;
    printf("Signed Range -  Min Size = %ld  and Max Size = %ld \n",min_size, max_size);
}

// This function is to print range of UnSigned data types.
// Range for unsigned data types = 0 to (2^N-1) + (2^(N-1) - 1)
void getUnSignedDataTypeRange(int sizeOfDataType) {
    int sizeInBits = sizeOfDataType * 8;
    long min_size = 0;
    long max_size = pow(2,sizeInBits - 1) + pow(2,sizeInBits - 1) - 1;
    printf("UnSigned Range - Min Size = %ld  and Max Size = %ld \n",min_size, max_size);
}

int main(void) {
    printf("###################################################################### \n"); 
    printf("Minimum and Maximum Values of Different Data Types in C \n");
    printf("###################################################################### \n"); 
    printf("1. char -> Size %lu \n", sizeof(char));
    getSignedDataTypeRange(sizeof(char));
    getUnSignedDataTypeRange(sizeof(char));
    printf("###################################################################### \n"); 
    printf("2. int -> Size %lu \n", sizeof(int));
    getSignedDataTypeRange(sizeof(int));
    getUnSignedDataTypeRange(sizeof(int));
    printf("###################################################################### \n"); 
    printf("3. short -> Size %lu \n", sizeof(short));
    getSignedDataTypeRange(sizeof(short));
    getUnSignedDataTypeRange(sizeof(short));
    printf("###################################################################### \n"); 

}