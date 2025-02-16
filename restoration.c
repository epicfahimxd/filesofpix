/**************************************************************
 *
 *                     restoration.c
 *
 *     Assignment: filesofpix
 *     Authors:  Fahim Rashid, Hoang Mai
 *     Date:     1/23/2025
 *
 *     summary
 *
 *     Restoration.c is built off the implementation of 
 *     readaline.c, and attempts to "uncorrupt" a plain pgm file
 *     and export the raw file
 * 
 **************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "pnmrdr.h"
#include "readaline.h"

void errorChecker(int argc, char *argv[], FILE *fp);

int main (int argc, char *argv[]) 
{
        /* First check if file can be opened from inputted execute argument */
        FILE *fp = NULL;
        errorChecker(argc, argv, fp);
        /* Delete later when implementing restoration*/
        return 0;
}

/********** errorChecker ********
 *
 * Parameters:
 *      FILE *fp:           address of the file inputted to the command line
 *      char *argv[]:       which arugment in the executable line
 *      int argc:           number of arguments in the executable line
 *
 * Return: None
 *        
 * Notes:
 *      Throws a Checked Runtime Error when there's no second argument,
 *      more than one file, or if opening up the file, there arises an
 *      error.
 * 
 *******************************/
void errorChecker(int argc, char *argv[], FILE *fp)
{
        fp = fopen(argv[1], "r");
        if ((argc < 1) || (argc > 2) || (fp == NULL)) {
                fprintf(stderr, "EC: Checked Runtime Error\n");
                exit(1);
        } 
        char *line;
        readaline(fp, &line);
        printf("%s", line);
}
