#include<iostream>
#include<cmath>
#include<string>
#include<vector>
#include<algorithm>

double convert_to_meters(double value, std::string unit) {
	if (unit == "cm")
		return value/100;
	if (unit == "in")
		return value/100*2.54;
	if (unit == "ft")
		return value/100*2.54*12;
	return value;
}

int main() {
	std::vector<double> entered_values;
	double in_num;
	std::string unit;

	double min_so_far = 0;
	double largest_so_far = 0;
	double sum = 0;
	int values_entered = 0;
	while(std::cin >> in_num >> unit) {
		if (unit == "cm" || unit == "m" || unit == "in" || unit == "ft") {
			double converted_num = convert_to_meters(in_num, unit);
			sum += converted_num;
			entered_values.push_back(converted_num);
			++values_entered;
			if (converted_num < min_so_far) {
				std::cout << "Min so far!" << std::endl;
				min_so_far = converted_num;
			}
			if (converted_num > largest_so_far) {
				std::cout << "Max so far!" << std::endl;
				largest_so_far = converted_num;
			}
			std::cout << converted_num << "m" << std::endl;
		} else {
			std::cout << "Sorry, unknown unit" << std::endl;
		}
	}
	//hm...
	sort(entered_values.begin(), entered_values.end());
	// all the end of session info
	std::cout << "Total Entered: " << values_entered << std::endl;
	std::cout << "Largest enterd: " << largest_so_far << std::endl;
	std::cout << "Smallest enterd: " << min_so_far << std::endl;
	std::cout << "Values entered:" << std::endl;

	for(auto val : entered_values)
		std::cout << val << "m" << std::endl;
}
