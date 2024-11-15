#ifndef SQRT_OPT_H
#define SQRT_OPT_H

typedef float v4sf __attribute__ ((vector_size (16)));
typedef int v4si __attribute__ ((vector_size (16)));

//TODO check with objectdump if code is optimized with SMID commands
// we need commands vaddps, vmultps, vdivps => at least once, maybe more often
// these commands MUST occur in any order

template <size_t LOOPS = 2>
float sqrt1(float * a) {
  float root;
  // from here
  root = 0; // to avoid a warning, delete this in your code
  // TODO: your code
  // to here
  return root;
}

//a is input, root is the result
template <size_t LOOPS = 2>
void sqrt2(float * __restrict__ a, float * __restrict__ root) {
  // from here
  // TODO: your code
  // to here
}

//treat a and root as an array of length 4, calculate for all values
//we only need to cast once for each array
template <size_t LOOPS = 2>
void v4sf_sqrt(v4sf *  __restrict__  a, v4sf *  __restrict__  root) {
  // from here
  // TODO: your code
  // to here
}


// wrapper für v4sf_sqrt
template <size_t LOOPS = 2>
void sqrt3(float *  __restrict__  a, float *  __restrict__  root) {
  v4sf *as =  reinterpret_cast<v4sf *>(a);
  v4sf_sqrt<LOOPS>(as, reinterpret_cast<v4sf *>(root) );
}

#endif

