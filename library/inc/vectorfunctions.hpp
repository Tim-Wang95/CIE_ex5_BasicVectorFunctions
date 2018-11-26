#include <iostream>
#include <string>
#define YOURLIBRARY_DLLEXPORT __declspec(dllexport)

namespace vecfun {
	YOURLIBRARY_DLLEXPORT void InputValue(double vec[], int s);
	YOURLIBRARY_DLLEXPORT void PrintValue(double vec[], int s);
	YOURLIBRARY_DLLEXPORT double DotProduct(double vec1[], double vec2[], int s1, int s2);
	YOURLIBRARY_DLLEXPORT double EuNorm(double vec[], int s);
	YOURLIBRARY_DLLEXPORT double MaxNorm(double vec[], int s);
	YOURLIBRARY_DLLEXPORT double* CreateArray(int& size);
	YOURLIBRARY_DLLEXPORT void DeleteArray(double* vec);
}