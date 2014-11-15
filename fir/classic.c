#ifndef github_com_kranfix_playground_fir_c
#define github_com_kranfix_playground_fir_c

#include <github.com/kranfix/playground/fir.h>


struct Fir {
   void * vals;
   int n; // zise of the vals array
} ;

typedef struct fir fir;

struct fir {
   void * handler;
} ;

typedef struct Fir Fir;

/*SimpleMean returns:
 *
 *    A[0] + A[1] + ... + A[n-1]
 *    --------------------------
 *                 n
 *
 *    Where:
 *      n: Filter order
 *  
 */
static float SimpleMean(Fir * f) {
  float m = f->vals[0];
  for(int i = 1; i < n; i++) {
    m += f->vals[i];
  }
  return m / n;
}

#endif // github_com_kranfix_playground_fir_c
