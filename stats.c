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

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

}
void print_statistics(unsigned char array[], int length) {
    // TODO: Implement later
}

void print_array(unsigned char array[], int length) {
    // TODO: Implement later
}

unsigned char find_median(unsigned char array[], int length) {
    // TODO: Implement later
    return 0;
}

unsigned char find_mean(unsigned char array[], int length) {
    // TODO: Implement later
    return 0;
}

unsigned char find_maximum(unsigned char array[], int length) {
    // TODO: Implement later
    return 0;
}

unsigned char find_minimum(unsigned char array[], int length) {
    // TODO: Implement later
    return 0;
}

void sort_array(unsigned char array[], int length) {
    // TODO: Implement later
}
