#include<iostream>


void doSmth() { throw std::runtime_error("Uncaught error!"); }

int main() {

	doSmth();

}
