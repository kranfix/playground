#ifndef github_com_kranfix_playground_maf_c
#define github_com_kranfix_playground_maf_c

#include <github.com/kranfix/playground/fir.h>

#ifndef __cplusplus
extern "C" {
#endif // __cplusplus


/*classicFIFOSimpleMean returns:
 *
 *  The mathematic equation in the discret time k:
 *  
 *             x[k] + x[k-1] + ... + x[k+1-n]
 *     y[k] = --------------------------------
 *                            n
 *
 *  The computational equation:
 *
 *         A[0] + A[1] + ... + A[n-1]
 *    y =  --------------------------
 *                     n
 *
 *   Where:
 *     n: Filter order
 */
static float classicFIFOSimpleMean(ClassicFIFO * f) {
  float y = f->vals[0];
  for(int i = 1; i < n; i++) {
    m += f->vals[i];
  }
  return y / n;
}

/*circularFIFOoptimizedMean:
 *  This
 *
 *  Given the mathematic equation in SimpleMean, the
 *  Z transform is applied:
 *
 *          1
 *  Y(z) = --- { 1 +  z^-1 + z^-2 + ... + z^(-n+1)  } X(z)
 *          n
 *
 *          (1 - z^-n) X(z)
 *  Y(z) =  ---------------
 *           n * (1 - z^-1)
 *
 *
 *  This equation can be divided in the followings:
 *
 *  Y(Z)   1 - z^-n                h(k) - h(k-n)
 *  ---- = --------   ===>  y(k) = ------------ 
 *  H(z)      n                         n
 *
 *  H(z)      1
 *  ---- = --------   ===>  h(k) = x(k) + h(k-1)
 *  X(z)   1 - z^-1
 *  
 *  And the computational equations considering
 *  - h[k] <> A[p]
 *  - h[k-1] <> A[p-1] (special case p == 0: A[n])
 *  - h[k-n] <> A[p+1] (special case p == n: A[0])
 *
 *  Are:
 *  - y = (A[p] - A[p+1]) / n
 *        (A[n] - A[0]) / n   (special case p == n)
 *  - A[p] = newdata + A[p-1]
 *           newdata + A[n]   (special case p == 0)
 *
 * Note:
 *   This function could generate an overflow.
 */
static float optimizedMean(CircularFIFO * f, float * newdata) {
  f->A[f->p] = newdata + f->A[ (f->p + f->len -1) % f->len ];
  return ( A[f->p] - A[ (f->p + 1 ) % f->len ] ) / (len-1);
}


#ifndef __cplusplus
}
#endif // __cplusplus

#endif // github_com_kranfix_playground_maf_c
