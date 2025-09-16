/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <stats.c> 
 * @brief <This file defines the functions declared in stats.h. 
 * Currently, the functions are only stubbed (empty bodies) 
 * with TODOs for implementation. Future commits will include 
 * full logic for computing statistics and displaying results. >
 *
 * <Add Extended Description Here>
 *
 * @author <Debojyoti Chakraborty>
 * @date <16-09-2025>
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
                                
                                
  printf("Original Data:\n");
  print_array(test, SIZE);

  printf("\nSorted Data (Descending):\n");
  sort_array(test, SIZE);
  print_array(test, SIZE);

  printf("\nStatistics:\n");
  print_statistics(test, SIZE);

  return 0;

}
void print_statistics(unsigned char array[], int length) {
	
    printf("Minimum: %d\n", find_minimum(array, length));
    printf("Maximum: %d\n", find_maximum(array, length));
    printf("Mean   : %d\n", find_mean(array, length));
    printf("Median : %d\n", find_median(array, length));
}

void print_array(unsigned char array[], int length) {
	
	int i;
    for (i = 0; i < length; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

unsigned char find_median(unsigned char array[], int length) {
	
    unsigned char temp[length];
    int i;
    for (i = 0; i < length; i++) {
        temp[i] = array[i];
    }

    sort_array(temp, length);

    if (length % 2 == 0) {
        return (temp[length/2 - 1] + temp[length/2]) / 2;
    } else {
        return temp[length/2];
    }
}

unsigned char find_mean(unsigned char array[], int length) {
	
    unsigned int sum = 0;
    int i;
    for (i = 0; i < length; i++) {
        sum += array[i];
    }
    return (unsigned char)(sum / length);
}

unsigned char find_maximum(unsigned char array[], int length) {
	
    unsigned char max = array[0];
    int i;
    for (i = 1; i < length; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

unsigned char find_minimum(unsigned char array[], int length) {
	
    unsigned char min = array[0];
    int i;
    for (i = 1; i < length; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}

void sort_array(unsigned char array[], int length) {
	
	int i,j;
    for (i = 0; i < length - 1; i++) {
        for (j = 0; j < length - i - 1; j++) {
            if (array[j] < array[j + 1]) {
                unsigned char temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
