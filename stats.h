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
 * @brief <Statistics calculator for a set of numbers>
 *
 * <This project aims to conduct some statistical operations like mean, median, min, and max.>
 *
 * @author <Mostafa Ayyad>
 * @date <22 jan - 2022>
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

void print_array(unsigned char x[], int s);

void print_statistics();

float find_median(unsigned char x[], int s);

float find_mean(unsigned char x[], int s);

int find_maximum(unsigned char x[], int s);

int find_minimum(unsigned char x[], int s);

void sort_array(unsigned char x[], int s);

/**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <Add Return Informaiton here>
 */


#endif /* __STATS_H__ */
