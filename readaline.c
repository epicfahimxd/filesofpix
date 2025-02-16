/**************************************************************
 *
 *                     readaline.c
 *
 *     Assignment: filesofpix
 *     Authors:  Fahim Rashid, Hoang Mai
 *     Date:     1/23/2025
 *
 *     summary
 *
 *     readaline.c implements a function to read a particular
 *     line of an inputted file     
 * 
 **************************************************************/

#include "readaline.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define MAX_LENGTH 1000

void allocateMem(char **datapp) 
{
    *datapp = malloc( (MAX_LENGTH + 1) * sizeof(char));
}

/********** readaline ********
 *
 *
 * Parameters:
 *      FILE *inputfd:      address of the file inputted to the command line
 *      char **datapp:      set to the address of the first byte 
 *
 * Return: Number of bytes in the line
 *
 * Expects
 *      Partial Credit: A line that contains numbers and non-digit bytes
 *                      that does not exceed 1000 characters in l   
 * Notes:
 *      Throws CRE if either/both arguments are NULL
 *      Error from reading the file
 *      Memory Allocation Fails
 *      input line is beyond the 1000 length limit
 ************************/
size_t readaline(FILE *inputfd, char **datapp)
{
        /* Checking if the arguments provided are valid */
        if(inputfd == NULL || datapp == NULL){
                // Work on these error strings
                fprintf(stderr, "RAL: Checked Runtime Error\n");
                exit(1);
        }

        allocateMem(datapp);
        fgets(*datapp, MAX_LENGTH, inputfd);

        return strlen(*datapp); 
}




