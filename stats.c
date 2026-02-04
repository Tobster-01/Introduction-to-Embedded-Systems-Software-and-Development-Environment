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
 * @file stats.c 
 * @brief Calculates the statistics of an array of unsigned char data items
 *
 * This file calculates the stastics of 
 * an array of unsigned char data items 
 * and prints the results.
 *
 * @author Tobi
 * @date 30/01/2026
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
  sort_array(test, SIZE);
  print_statistics(test, SIZE);
  print_array(test, SIZE);

}

/* Add other Implementation File Code Here */
void print_statistics(unsigned char * array, unsigned int size){
  unsigned char max = find_maximum(array, size);
  unsigned char min = find_minimum(array, size);
  unsigned char mean = find_mean(array, size);
  unsigned char median = find_median(array, size);
  
  printf("Maximum: %hhu\n Minimum: %hhu\n Mean: %hhu\n Median: %hhu\n", max, min, mean, median);
} 

void print_array(unsigned char * array, unsigned int size) {
  for(int i = 0; i < size; i++){
    printf("%hhu ", array[i]);
  }
}

unsigned char find_median(unsigned char * array, unsigned int size) {
  if(size % 2 == 0) {
    int median = ((array[size/2] + array[(size/2) - 1])/2);
    return (char) median;
  } else {
    int median = array[size/2];
    return (char) median;
  }
}

unsigned char find_mean(unsigned char * array, unsigned int size) {
  int sum = 0;
  for(int i = 0; i < size; i++) {
    sum += array[i];
  }
  int mean = sum/size;

  return (char) mean;  
}

unsigned char find_maximum(unsigned char * array, unsigned int size) {
  int i = 0;
  unsigned char max = array[0];
  while(i < size) {
    if(array[i] > max) {
      max = array[i];
    }
    i++;
  }

  return max;
}

unsigned char find_minimum(unsigned char * array, unsigned int size) {
  int i = 0;
  unsigned char min = array[0];
  while(i < size) {
    if(array[i] < min) {
      min = array[i];
    }
    i++;
  }

  return min;
}

void sort_array(unsigned char * array, unsigned int size) {
  for (int i = 0; i < size - 1; i++) {
    for(int j = i + 1; j < size; j++) {
      if(array[j] > array[i]) {
        unsigned char temp = array[i];
        array[i] = array[j];
        array[j] = temp;
      }
    }
  }
} 