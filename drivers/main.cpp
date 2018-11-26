#include "vectorfunctions.hpp"

int main() {
	std::string In = ""; int n1, n2;

	while (In != "e") {
		std::cout << "1) Dot Product, 2) Euclidean norm, 3) Maximum norm, e) exit" << std::endl;
		std::cin >> In;

		if (In == "1") {
			std::cout << "First array, ";
			double* v1 = vecfun::CreateArray(n1);
			std::cout << "Second array, ";
			double* v2 = vecfun::CreateArray(n2);
			double dot = vecfun::DotProduct(v1, v2, n1, n2);
			std::cout << "The dot product of the 2 vectors is: " << dot << std::endl << std::endl;
			vecfun::DeleteArray(v1); vecfun::DeleteArray(v2);
			continue;
		}
		else if (In == "2") {
			double* v1 = vecfun::CreateArray(n1);
			double enorm = vecfun::EuNorm(v1, n1);
			std::cout << "The Euclidean norm of the vector is: " << enorm << std::endl << std::endl;
			vecfun::DeleteArray(v1);
			continue;
		}
		else if (In == "3") {
			double* v1 = vecfun::CreateArray(n1);
			double mnorm = vecfun::MaxNorm(v1, n1);
			std::cout << "The maximum norm of the vector is: " << mnorm << std::endl << std::endl;
			vecfun::DeleteArray(v1);
			continue;
		}
		else if (In == "e") {
			break;
		}
	}

	return 0;
}
