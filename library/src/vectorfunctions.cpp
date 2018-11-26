#include <iostream>
#include <cmath>
#include <string>
#define YOURLIBRARY_DLLEXPORT __declspec(dllexport)

namespace vecfun {
	YOURLIBRARY_DLLEXPORT void InputValue(double vec[], int s) {
		std::cout << "Input value: ";
		for (int i = 0; i < s; i++) {
			std::cin >> vec[i];
		}
	}

	YOURLIBRARY_DLLEXPORT void PrintValue(double vec[], int s) {
		std::cout << "[";
		for (int i = 0; i < s; i++) {
			std::cout << vec[i] << " ";
		}
		std::cout << "]";
	}

	YOURLIBRARY_DLLEXPORT double DotProduct(double vec1[], double vec2[], int s1, int s2) {
		if (s1 != s2) {
			std::cout << "The sizes of the vectors don't match";
			return 0;
		}
		double sum = 0;
		for (int i = 0; i < s1; i++) {
			sum += vec1[i] * vec2[i];
		}
		return sum;
	}

	YOURLIBRARY_DLLEXPORT double EuNorm(double vec[], int s) {
		double sum = 0;
		for (int i = 0; i < s; i++) {
			sum += vec[i] * vec[i];
		}
		return std::sqrt(sum);
	}

	YOURLIBRARY_DLLEXPORT double MaxNorm(double vec[], int s) {
		double max = 0;
		for (int i = 0; i < s; i++) {
			if (std::abs(vec[i]) > max) { max = std::abs(vec[i]); }
		}
		return max;
	}

	YOURLIBRARY_DLLEXPORT double* CreateArray(int& size) {
		std::cout << "Enter size: "; std::cin >> size;
		double* array = new double[size];
		InputValue(array, size);

		return array;
	}

	YOURLIBRARY_DLLEXPORT void DeleteArray(double* vec) {
		delete[] vec;
	}
}