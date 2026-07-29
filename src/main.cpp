#include<iostream>
#include "compactModel.h"
#include "labelSetting.h"
#include <string.h>

using namespace std;


int main(int argc, char** argv) {
	/**********Read arguments*******/
	Args args = { 0 };
	parse_args(&args, argc, argv);

	/**********Solve SKP-S*******/
	cout << "Solve SKP-S using ";
	if (strcmp(args.method, "DP") == 0) {
		cout << "DP!" << endl;
		// Call DP exact method to solve the SKP-S
		LabelSettingSolveKnapsack(args);
	}
	else{
		cout << "Gurobi!" << endl;
		// Call the Gurobi solver to solve the compact SOCP model of the SKP-S
		SolveCompactKnapsackModel(args);
	}

	return 0;
}
