#include<iostream>
#include<cmath>

// checks if the two given doubles are equal within tolerance
int main() {
	double num1;
	double num2;
	const double tolerance = 1.0/100;
	while(std::cin >> num1 >> num2) {
		if (abs(num1 - num2) > tolerance) {
			int large = num1 > num2 ? num1 : num2;
			int small = num1 < num2 ? num1 : num2;
			std::cout << "the smaller value is: " << small << std::endl;
			std::cout << "the larger value is: " << large << std::endl;
		} else {
			std::cout << "the two numbers are almost equal" << std::endl;
		}
	}
}
