/*
** File:	mat.h
**
** Author: Schuyler Martin <sam8050@rit.edu>
**
** Description: Matrix library header
*/
#ifndef _MAT_H_
#define _MAT_H_

/********** Macros     **********/
// Maximum number of matrices to store at one time
#define MAX_ID 30;
// Maximum dimension of a matrix
#define MAX_DIM 100;

// Error codes
#define ERR_ROW_MISMATCH 1
#define ERR_COL_MISMATCH 2
// Success codes
#define SUCCESS 0

/********** Globals    **********/

/********** Structures **********/

/********** Functions  **********/

/*
** Creates a matrix of a given size
**
** @param nr Number of rows
** @param nc Number of cols
** @return Pointer to matrix in memory
*/
void** mk_mat(uint32_t nr, uint32_t nc);

#endif
