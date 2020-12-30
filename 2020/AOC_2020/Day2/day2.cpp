#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>



std::vector<int> split(const std::string& s, char delim) {
	std::vector<int> elems;
	std::stringstream ss(s);
	std::string number;
	while (std::getline(ss, number, delim)) {
		elems.push_back(std::stoi(number));
	}
	return elems;
}

bool tokenizer(std::string& input_string)

{

	if (input_string.empty())
	{
		return false;
	}

	int occurances = 0;
	std::string range;
	const char* start;
	const char* finish;
	//std::vector<std::string> rangeSplit;
	std::string password;
	char letter;


	//learn more about stream iterators
	std::stringstream ss(input_string);
	std::istream_iterator<std::string> begin(ss);
	std::istream_iterator<std::string> end;
	std::vector<std::string> vstrings(begin, end);

	//for (int i = 0; i < vstrings.size(); i++)
	//{
		//std::cout << vstrings[i] << std::endl;
	//}

	//because it is an array of strings it is essentially an array of arrays thats why I can
	//do what I have done with the letter var.
	range = vstrings[0];
	letter = vstrings[1][0];
	password = vstrings[2];

	//std::cout << range << std::endl;

	std::vector<int> rangeSplit = split(range, '-');



	//std::cout << rangeSplit.size() << std::endl;

	std::cout << rangeSplit[0] << " " << rangeSplit[1] << std::endl;

	int first = rangeSplit[0] - 1;// = std::atoi(rangeSplit[0]);
	int second = rangeSplit[1] - 1;




	std::cout << letter << " " << first << " " << second << " " << password << std::endl;

	std::cout << password[first] << " " << password[second] << " " << password << std::endl;


	//std::cout << upper << " " << lower << std::endl;


	if ((password[first] == letter) && (password[second] != letter))
	{
		return true;
				
	}
	if ((password[first] != letter) && (password[second] == letter))
	{
		return true;
		
	}
	if (password[first] == letter && password[second] == letter)
	{
		return false;
	}
	if(password[first] != letter && password[second] != letter)
	{
		return false;
	}
	else
	{
		return false;
	}
	
}





int main()
{
	std::ifstream file;
	file.open("../../day2.txt");
		
	std::string input_string;

	int valid = 0;
	int round = 0;
	

	if (!file)
	{
		std::cout << "Could Not Open File" << std::endl;
		return 0;
	}

	do
	{
		input_string = {};
		std::getline(file, input_string);


		if (tokenizer(input_string))
		{
			valid++;
		}

		round++;
		//std::cout << "round: " << round << std::endl;

		if (file.fail())
		{
			break;
		}

	} while (file.good());


	std::cout << valid << std::endl;

	
	//monkey nuts

	
}






