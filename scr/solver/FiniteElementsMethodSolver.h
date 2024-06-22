#pragma once
#include "../model/mathmodels/kristini/VittorioKristiniMathModel.h"

class FiniteElementsMethodSolver
{
private: 
	//TODO. Implement it. Improve it. Talk about it
	void computeKEMatrixForTrianlgeLinearElements();
	void computeMEMatrixForTrianlgeLinearElements();
	void computeQEMatrixForTrianlgeLinearElements();
	void assembleGlobalMatrixForTrianlgeLinearElements();
	void assembleRightHandSideForTrianlgeLinearElements();

public:
	void solve(VittorioKristiniMathModel mathModel);
};

