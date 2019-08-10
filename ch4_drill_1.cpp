#include<iostream>

int main() {
	int num1;
	int num2;
	while(std::cin >> num1 >> num2) {
		int large = num1 > num2 ? num1 : num2;
		int small = num1 < num2 ? num1 : num2;
		std::cout << "the smaller value is: " << small << std::endl;
		std::cout << "the larger value is: " << large << std::endl;
	}
}
