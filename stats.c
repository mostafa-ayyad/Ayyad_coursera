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
 * @brief <Statistics calculator for a set of numbers>
 *
 * <This project aims to conduct some statistical operations like mean, median, min, and max.>
 *
 * @author <Mostafa Ayyad>
 * @date <22 jan - 2022>
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

void main() {

  print_array(test, SIZE);
  print_statistics();
  printf("\n");

  sort_array(test, SIZE);
  print_array(test, SIZE);

}



/* Functions implementation */


// Function that prints an array
void print_array(unsigned char x[], int s){
  
}

//------------------------------------------------------------------------------------------------------------------------------------------
// Function that prints statistics of an array. (Contains max, min, mean and median function calls)
void print_statistics(){
  
}

//------------------------------------------------------------------------------------------------------------------------------------------
// Function that calculate the median of an array
float find_median(unsigned char x[], int s){
  
}

//------------------------------------------------------------------------------------------------------------------------------------------
// Function that calculate the mean of an array
float find_mean(unsigned char x[], int s){
  
}

//------------------------------------------------------------------------------------------------------------------------------------------
// Function that outputs the max number in an array
int find_maximum(unsigned char x[], int s){
  
}

//------------------------------------------------------------------------------------------------------------------------------------------
// Function that outputs the min number in an array
int find_minimum(unsigned char x[], int s){
  
}


//------------------------------------------------------------------------------------------------------------------------------------------
//Function that sorts an array (greatest value have an index of 0)
void sort_array(unsigned char x[], int s){
  
}














