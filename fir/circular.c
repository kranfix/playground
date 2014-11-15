#ifndef github_com_kranfix_playground_fir_c
#define github_com_kranfix_playground_fir_c

#include <github.com/kranfix/playground/fir.h>

/* Circular FIFO with fixed number or elements:
 *   Given the memory space in the discret time T0:
 *
 *     0   1   ...      k-2        k-1       k       k+1     ...  n-1  n 
 *   ---------------------------------------------------------------------
 *   |   |   | ... | x[m-n+2] | x[m-n+1] | X[m-n] | X[m-1] | ... |   |   |
 *   ---------------------------------------------------------------------
 *                                          || 
 *   Is updated to:                         ||
 *                                          \/
 *     0   1   ...      k-2        k-1       k       k+1     ...  n-1  n 
 *   ---------------------------------------------------------------------
 *   |   |   | ... | x[m-n+2] | x[m-n+1] |  X[m]  | X[m-1] | ... |   |   |
 *   ---------------------------------------------------------------------
 */


#ifndef __cplusplus
extern "C" {
#endif // __cplusplus

/*InsertCircularFIFO:
 *  Inserts the sampled value in a suite place in the memory and update
 *  the pivot "p" to handler the FIFO.
 */
static void
CircularFIFOInsert(FirCircular * c, float newdata) {
  c->p--;
  if( c->p == -1 ) c->p += c->n;
  c->A[p] = newdata;
}

/* CircularFIFOCalcValue:
 *   Given a Coeffients array C, the output is calculated.
 *
 *   The mathematic equation is:
 *
 *              C[k] * x[k] + C[k-1] * x[k-1] + .... + C[k+1-n] * x[k+1-n]
 *      y[k] =  ----------------------------------------------------------
 *                                           n
 *   And the computational equation is:
 *
 *             C[0] * x[p] + C[1] * x[p+1] + ... + C[n-p-1] * x[n-1]  + 
 *             C[n-p] * x[0] + ... + C[n-1] * x[p-1]
 *      y   =  ----------------------------------------------------------
 *                                           n
 */
static float CircularFIFOCalcValue(CircularFIFO * c, float C[]) {
  float y = 0;
  int i = 0, j = c->p;
  for( ; j < n ; i++, j++ ) {
    y += C[i] * c->A[j];
  }
  for(j = 0; j < c->p ; i++, j++ ) {
    y += C[i] * c->A[j];
  }
  return y;
}

#ifndef __cplusplus
}
#endif // __cplusplus extern "C"

#endif // github_com_kranfix_playground_fir_c
