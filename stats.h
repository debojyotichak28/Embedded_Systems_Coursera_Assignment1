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
 * @file <stats.h> 
 * @brief <This header file provides declarations for functions that 
 * calculate and display statistical measures such as mean, 
 * median, maximum, minimum, and sorting of a dataset. It also 
 * contains utilities to print arrays and statistics. >
 *
 * <Add Extended Description Here>
 *
 * @author <Debojyoti Chakraborty>
 * @date <16-09-2025>
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/***********************************************************
 * @brief Prints the statistics of an array
 *
 * This function prints the minimum, maximum, mean, and median
 * of the dataset.
 *
 * @param array The input dataset
 * @param length The number of elements in the dataset
 ***********************************************************/
void print_statistics(unsigned char array[], int length);

/***********************************************************
 * @brief Prints the array to the screen
 *
 * @param array The input dataset
 * @param length The number of elements in the dataset
 ***********************************************************/
void print_array(unsigned char array[], int length);

/***********************************************************
 * @brief Find the median value
 *
 * @param array The input dataset
 * @param length The number of elements in the dataset
 * @return The median value
 ***********************************************************/
unsigned char find_median(unsigned char array[], int length);

/***********************************************************
 * @brief Find the mean value
 *
 * @param array The input dataset
 * @param length The number of elements in the dataset
 * @return The mean value
 ***********************************************************/
unsigned char find_mean(unsigned char array[], int length);

/***********************************************************
 * @brief Find the maximum value
 *
 * @param array The input dataset
 * @param length The number of elements in the dataset
 * @return The maximum value
 ***********************************************************/
unsigned char find_maximum(unsigned char array[], int length);

/***********************************************************
 * @brief Find the minimum value
 *
 * @param array The input dataset
 * @param length The number of elements in the dataset
 * @return The minimum value
 ***********************************************************/
unsigned char find_minimum(unsigned char array[], int length);

/***********************************************************
 * @brief Sort the array from largest to smallest
 *
 * @param array The input dataset
 * @param length The number of elements in the dataset
 ***********************************************************/
void sort_array(unsigned char array[], int length);


#endif /* __STATS_H__ */
