#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <math.h>



int slopeTransit(std::vector<std::string>& map, int right, int down)
{
	int trees = 0;


	int j = 0;
	for (int i = down; i < map.size(); i+=down)
	{
		j += right;

		//this should make it wrap
		if (j >= map[i].size())
		{
			j -= map[i].size();
		}


		if (map[i][j] == '#')
		{
			trees++;
		}

	}

	return trees;
}

int main()
{
	std::ifstream file;
	file.open("../../day3.txt");

	std::string map_line;

	std::vector<std::string> map;
	int trees = 0;

	int slope1 = 0;
	int slope2 = 0;
	int slope3 = 0;
	int slope4 = 0;
	int slope5 = 0;

	if (!file)
	{
		std::cout << "Could Not Open File" << std::endl;
		return 0;
	}

	do
	{
		std::getline(file, map_line);

		map.push_back(map_line);


		if (file.fail())
		{
			break;
		}

	} while (file.good());

	slope1 = slopeTransit(map, 1, 1);
	slope2 = slopeTransit(map, 3, 1);
	slope3 = slopeTransit(map, 5, 1);
	slope4 = slopeTransit(map, 7, 1);
	slope5 = slopeTransit(map, 1, 2); 

	std::cout << slope1 << " " << slope2 << " " << slope3 <<
		" " << slope4 << " " << slope5 << std::endl;

	uint64_t answer = slope1 * slope2 ;

	answer *= slope3;
	answer *= slope4;
	answer *= slope5;


	std::cout << answer << std::endl;


	
}






