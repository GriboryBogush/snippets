#include<iostream>
#include<string>
using namespace std;
/* 

broken_program_v1.cpp: In function 'int main()':
broken_program_v1.cpp:6:2: error: 'STRING' was not declared in this scope
  STRING s = "Goodbye, cruel world!";
  ^~~~~~
broken_program_v1.cpp:6:2: note: suggested alternative: 'SIGINT'
  STRING s = "Goodbye, cruel world!";
  ^~~~~~
  SIGINT
broken_program_v1.cpp:7:2: error: 'cOut' was not declared in this scope
  cOut << S << '\n';
  ^~~~
broken_program_v1.cpp:7:10: error: 'S' was not declared in this scope
  cOut << S << '\n';
         ^
 */
int main() {
	STRING s = "Goodbye, cruel world!";
	cOut << S << '\n';
}
