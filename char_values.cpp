#include<iostream>

int main() {
	char lowcase = 'a';
	char upcase = 'A';
	for(int i = 0; i < 26; ++i){
		std::cout << lowcase << " : " << int(lowcase) << std::endl;
		std::cout << upcase << " : " << int(upcase) << std::endl;
		++lowcase;
		++upcase;
	}
}
