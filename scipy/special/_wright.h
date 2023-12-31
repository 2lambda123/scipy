#ifndef WRIGHT_H
#define WRIGHT_H

#ifdef __cplusplus
#define EXTERN_C_START extern "C" {
#define EXTERN_C_END }
#else
#define EXTERN_C_START
#define EXTERN_C_END
#endif

#include <Python.h>
#include <complex>

#include "wright.hh"

EXTERN_C_START

#include <numpy/npy_math.h>

npy_cdouble wrightomega(npy_cdouble zp);
double wrightomega_real(double x);

EXTERN_C_END

#endif
