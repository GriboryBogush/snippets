#include<iostream>
using namespace std;
// An example to demonstrate
// unsafe numeric type converisons
// Note: std::cin seems to terminate
// the loop on certain input values....

int main() {
	double d = 0;
	while(cin >> d) {
		int i = d;
		char c = i;
		int i2 = c;
		cout << "d==" << d
			 << " i=="<< i
			 << " i2==" << i2
			 << " char(" << c <<")\n";
	}
}
