#ifndef COMPACTMOD_H
#define COMPACTMOD_H

#ifdef __cplusplus
extern "C" {
#endif
#include "cli_parse.h"
#include "instance.h"
#ifdef __cplusplus
}
#endif
#define GRBMAXSOLTIME 3600

#include <iostream>
#include <vector>
#include <math.h>
#include <fstream>
#include "gurobi_c++.h"


// Call the GuRoBi solver to solve the compact SOCP model of the SKP-S
void SolveCompactKnapsackModel(Args& args);

// Call the GuRoBi solver to solve the linear relaxation of the Knapsack Problem
void SolveLinearKnapsack(Instance& instance, int itemIdx, double& preWeight, double& dualProfit);


#endif