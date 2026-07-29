#ifndef __INSTANCE_H
#define __INSTANCE_H
#ifndef RESTRICT
#  if defined(__cplusplus)
#    define RESTRICT
#  else
#    define RESTRICT restrict
#  endif
#endif

#ifdef __cplusplus
extern "C" {
#endif
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "macros.h"

#define EX 1e-8

typedef struct {
	size_t n_items;			// number of items
	double* a_ptr;			// mean weights
	double* b_ptr;          // variance weights    
	double* p_ptr;          // profit
	double* p_weight;       // profit per weight
	double capacity;		// knapsack capacity
	double rho;				// risk parameter
	size_t n_items_eff;
	bool equal_p_a;
} Instance;

int instance_parse(Instance *RESTRICT, const char* const RESTRICT);
void instance_free(Instance *RESTRICT);

#ifdef __cplusplus
}
#endif
#endif
