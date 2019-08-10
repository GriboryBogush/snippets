#include<iostream>
#include<string>
#include<vector>

int main() {
	std::vector<std::string> dislike = {"Banana", "Peach", "Apricot"};

	for(std::string in; std::cin >> in;){
		bool contains = false;
		// Note: be very careful about omitting {}
		// it could lead to very weird errors
		for(auto name : dislike)
			if (name == in) { contains = true; std::cout << "BEEP" << std::endl;}

		if (!contains)
			std::cout << in << std::endl;
	}
}
