#ifndef github_com_kranfix_playground_fir_c
#define github_com_kranfix_playground_fir_c

#include <github.com/kranfix/playground/fir.h>

#ifndef __cplusplus
extern "C" {
#endif // __cplusplus


/*insertClassicFIFO:
 *  Like a FIFO of a static number of elements,
 *  a new data is added a the oldest is lost.
 *  Newdata -> A[0] -> A[1] -> .... A[n-1]
 */
static void
insertClassicFIFO(int * A, int n, float newdata) {
  for( int i = n - 1; i > 0; i-- ) {
    A[i] = A[i-1];
  }
  A[0] = newdata;
}

#ifndef __cplusplus
}
#endif // __cplusplus

#endif // github_com_kranfix_playground_fir_c
