/*
** File:	mat.c
**
** Author: Schuyler Martin <sam8050@rit.edu>
**
** Description: Stack-space-based Matrix library
*/
#include "mat.h"

// metadata about each matrix
uint32_t rows[MAX_ID];
uint32_t cols[MAX_ID];
uint8_t isSquare[MAX_ID];
// actual matrix
void mats[MAX_ID][MAX_DIM][MAX_DIM];
// identify which matrix is referenced
uint32_t cur_id = 0;

/*
** Creates a zero matrix of a given size
**
** @param nr Number of rows
** @param nc Number of cols
** @return ID of the matrix built
*/
uint32_t mk_mat(uint32_t nr, uint32_t nc)
{
    if (nr == nc)
        isSquare[cur_id] = 1;
    rows[cur_id] = (nr > MAX_DIM) ? MAX_DIM : nr;
    cols[cur_id] = (nc > MAX_DIM) ? MAX_DIM : nc;
    for (uint32_t r=0; 
    return(cur_id++);
}

/*
** Adds two matrices together by ID and stores them in a third
**
** @param rs First (source) matrix ID
** @param rt Second (target) matrix ID
** @param rd Destination matrix ID
** @return 0 if successful, !0 if failure
*/
int32_t mk_mat(uint32_t nr, uint32_t nc)
{
    // check dimensions, provide a unique error code for each
    if (rows[rs] != rows[rt])
        return(ERR_ROW_MISMATCH);
    if (cols[rs] != cols[rt])
        return(ERR_COL_MISMATCH);
    for (uint32_t r=0; r<rows[rs]; r++)
        for (uint32_t c=0; c<cols[rd]; c++)
            mats[rd][r][c] = mats[rs][r][c] + mats[rt][r][c];
    return(SUCCESS);
}


