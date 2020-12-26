#include <iostream>
#include <fstream>
#include <vector>
#include <string>


int main()
{
	std::ifstream file;
	file.open("../../day2.txt");

	//std::vector<std::string> init_stream;

	std::vector<std::string> range;

	std::vector<char> letter;

	std::vector<std::string> passwords;

	//std::vector<bool> rule_match;

	std::string input_string;

	int valid = 0;

	

	if (!file)
	{
		std::cout << "Could Not Open File" << std::endl;
		return 0;
	}

	while (file.good())
	{
		std::getline(file, input_string);


		if (tokenizer(input_string, range, passwords, letter))
		{
			valid++;
		}

		

		std::cout << input_string << std::endl;

	}

	//std::cout << init_stream.size() << std::endl;

	
	//monkey nuts

	
}



bool tokenizer(std::string input_string, std::vector<std::string>& range, std::vector<std::string>& passwords,
	std::vector<char>& letter)

{
	char* token;
	char* str= new char[input_string.size() + 1];
	std::copy(input_string.begin(), input_string.end(), str);
	str[input_string.size()] = '\0'; // don't forget the terminating 0

	token = std::strtok(str, " ");

	// don't forget to free the string after finished using it
	delete[] str;
	return false;
}
	



