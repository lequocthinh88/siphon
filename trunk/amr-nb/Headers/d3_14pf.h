/*
********************************************************************************
*
*      GSM AMR-NB speech codec   R98   Version 7.6.0   December 12, 2001
*                                R99   Version 3.3.0                
*                                REL-4 Version 4.1.0                
*
********************************************************************************
*
*      File             : d3_14pf.h
*      Purpose          : Algebraic codebook decoder
*
********************************************************************************
*/
#ifndef d3_14pf_h
#define d3_14pf_h "$Id $"

/*
********************************************************************************
*                         INCLUDE FILES
********************************************************************************
*/
#include "typedef.h"

/*
********************************************************************************
*                         LOCAL VARIABLES AND TABLES
********************************************************************************
*/
 
/*
********************************************************************************
*                         DEFINITION OF DATA TYPES
********************************************************************************
*/

/*
********************************************************************************
*                         DECLARATION OF PROTOTYPES
********************************************************************************
*/
/*************************************************************************
 *
 *  FUNCTION:  decode_3i40_14bits (decod_ACELP())
 *
 *  PURPOSE:   Algebraic codebook decoder for 3 pulses coded with 14 bits
 *
 *************************************************************************/

void decode_3i40_14bits(
    Word16 sign,   /* i : signs of 3 pulses.                       */
    Word16 index,  /* i : Positions of the 3 pulses.               */
    Word16 cod[]   /* o : algebraic (fixed) codebook excitation    */
);

#endif