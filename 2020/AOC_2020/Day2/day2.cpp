#include <iostream>
#include <fstream>
#include <vector>
#include <string>


int main()
{
	std::ifstream file;
	file.open("E:/Dev/AOC/2020/day2.txt");

	std::vector<std::string> init_stream;

	std::getline(file, init_stream, '/n');

	
}