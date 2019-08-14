#include<iostream>

class Bad_area {};


int area(int length, int width) {
	if (length <= 0 || width <= 0) throw Bad_area{};
	return length*width;
}

int main() {
	try {
		int x = -1;
		int b = x*2;
		int c = 5;
		int d = 124;
		//....

		std::cout << area(c, d) << std::endl;
		// opsie error 
		std::cout << area(x, d) << std::endl;
		
		// ... won't execute..
	} catch (Bad_area) {
		std::cout << "Bad argument to area()" << std::endl; 
	}


}
