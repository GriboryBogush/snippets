#include<iostream>
#include<string>
using namespace std;
/*

broken_program_v2.cpp: In function 'int main()':
broken_program_v2.cpp:9:2: error: 'cOut' was not declared in this scope
  cOut << S << '\n';
  ^~~~
broken_program_v2.cpp:9:10: error: 'S' was not declared in this scope
  cOut << S << '\n';
          ^
*/
int main() {
	string s = "Goodbye, cruel world!";
	cOut << S << '\n';
}
