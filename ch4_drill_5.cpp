#include<iostream>
#include<cmath>


int main() {
	double num1;
	double min_so_far = 0;
	double largest_so_far = 0;
	while(std::cin >> num1) {
		if (num1 < min_so_far) {
			std::cout << "Min so far: " << num1 << std::endl;
			min_so_far = num1;
		}
		if (num1 > largest_so_far) {
			std::cout << "Max so far: " << num1 << std::endl;
			largest_so_far = num1;
		}
		std::cout << num1 << std::endl;
	}
}
