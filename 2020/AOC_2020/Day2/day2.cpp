#include <iostream>
#include <fstream>
#include <vector>
#include <string>


int main()
{
	std::ifstream file;
	file.open("../../day2.txt");

	std::vector<std::string> init_stream;

	std::vector<std::string> range;

	std::vector<char> letter;

	std::vector<std::string> passwords;

	std::vector<bool> rule_match;

	std::string input_string;

	

	while (file.good())
	{
		std::getline(file, input_string);

		init_stream.push_back(input_string);

		std::cout << input_string << std::endl;


	}

	

	
}