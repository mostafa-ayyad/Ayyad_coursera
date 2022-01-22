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
  int c;
  for(c = 0; c < s; c++){
    printf("%d ", x[c]);
  }
  printf("\n");
}

//------------------------------------------------------------------------------------------------------------------------------------------
// Function that prints statistics of an array. (Contains max, min, mean and median function calls)
void print_statistics(){
  float med = find_median(test, SIZE);
  printf("The median is: %0.1f \n", med);

  float mean = find_mean(test, SIZE);
  printf("The mean is: %0.1f \n", mean);

  int max = find_maximum(test, SIZE);
  printf("The max value is: %d \n", max);

  int min = find_minimum(test, SIZE);
  printf("The max value is: %d \n", min);
}

//------------------------------------------------------------------------------------------------------------------------------------------
// Function that calculate the median of an array
float find_median(unsigned char x[], int s){
  int c,m, hold;
  float med;

  //sorting the array first (greatest value have an index of 0)
  for(m=0; m<s; m++){
      for(c=m; c<s; c++){
          if(x[c] > x[m]){
              hold = x[m];
              x[m] = x[c];
              x[c] = hold;
          }
      }
  }

  if (s%2 == 0){
    med = (x[s/2] + x[s/2 -1]) /2.0;
  }
  else{
    med = x[s/2];
  }

  return med;

}

//------------------------------------------------------------------------------------------------------------------------------------------
// Function that calculate the mean of an array
float find_mean(unsigned char x[], int s){
  int c, sum=0;
  float mean;
  for(c = 0; c < s; c++){
    sum += x[c];
  }
  mean = (float)sum/s;
  return mean;
}

//------------------------------------------------------------------------------------------------------------------------------------------
// Function that outputs the max number in an array
int find_maximum(unsigned char x[], int s){
  int c,m, hold, max;

  //sorting the array first (greatest value have an index of 0)
  for(m=0; m<s; m++){
      for(c=m; c<s; c++){
          if(x[c] > x[m]){
              hold = x[m];
              x[m] = x[c];
              x[c] = hold;
          }
      }
  }

  max = x[0];

  return max;

}

//------------------------------------------------------------------------------------------------------------------------------------------
// Function that outputs the min number in an array
int find_minimum(unsigned char x[], int s){
  int c,m, hold, min;

  //sorting the array first (greatest value have an index of 0)
  for(m=0; m<s; m++){
      for(c=m; c<s; c++){
          if(x[c] > x[m]){
              hold = x[m];
              x[m] = x[c];
              x[c] = hold;
          }
      }
  }

  min = x[s-1];

  return min;

}


//------------------------------------------------------------------------------------------------------------------------------------------
//Function that sorts an array (greatest value have an index of 0)
void sort_array(unsigned char x[], int s){
  int c, m, hold;
  for(m=0; m<s; m++){
      for(c=m; c<s; c++){
          if(x[c] > x[m]){
              hold = x[m];
              x[m] = x[c];
              x[c] = hold;
          }
      }
  }
}













