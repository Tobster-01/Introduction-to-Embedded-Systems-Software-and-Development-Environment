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
 * @file stats.h
 * @brief Analyzing an array of unsigned char data items
 *
 * Calculates the mean, median, mode, and maximum and 
 * minimum values of an array of integers. It also sorts 
 * the array in descending order and prints the results.
 *
 * @author Tobi
 * @date 30/01/2026
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief Prints the statistics of an array
 *
 * This function takes an array of data items 
 * and calculates and prints the mean, median, 
 * mode, and maximum and minimum values of 
 * the array of integers.   
 *
 * @param array The array of data items
 * @param size The size of the array
 *
 * @return void
 */
void print_statistics(unsigned char * array, unsigned int size);

/**
 * @brief Prints an array
 *
 * This function takes an array of data items 
 * and prints the members of the array.
 *
 * @param array The array of unsigned char data items
 * @param size The size of the array
 *
 * @return void
 */
void print_array(unsigned char * array, unsigned int size);

/**
 * @brief Finds the median of an array
 *
 * This function takes an array of data items 
 * and calculates the median of the array.
 *
 * @param array The array of unsigned char data items
 * @param size The size of the array
 *
 * @return Median of the array
 */
unsigned char find_median(unsigned char * array, unsigned int size);

/**
 * @brief Finds the mean of an array
 *
 * This function takes an array of data items 
 * and calculates the mean of the array.
 *
 * @param array The array of unsigned char data items
 * @param size The size of the array
 *
 * @return Mean of the array
 */
unsigned char find_mean(unsigned char * array, unsigned int size);

/**
 * @brief Finds the maximum value of an array
 *
 * This function takes an array of data items 
 * and calculates the maximum value of the array.
 *
 * @param array The array of unsigned char data items
 * @param size The size of the array
 *
 * @return Maximum value of the array
 */
unsigned char find_maximum(unsigned char * array, unsigned int size);

/**
 * @brief Finds the minimum value of an array
 *
 * This function takes an array of data items 
 * and calculates the minimum value of the array.
 *
 * @param array The array of unsigned char data items
 * @param size The size of the array
 *
 * @return Minimum value of the array
 */
unsigned char find_minimum(unsigned char * array, unsigned int size);

/**
 * @brief Sorts an array in descending order
 *
 * This function takes an array of data items 
 * and sorts them in descending order
 *
 * @param array The array of unsigned char data items
 * @param size The size of the array
 *
 * @return void
 */
void sort_array(unsigned char * array, unsigned int size);

#endif /* __STATS_H__ */
