#include <iostream>
#include <fstream>
#include <vector>


int main()
{
	std::ifstream values;
	values.open("E:/Dev/AOC/2020/input.txt");

	std::vector<int> numbers;
	long product = 0;
	//just holds the read int value to be pushed back 
	int curval;

	bool complete = false;

	if (!values.good())
	{
		std::cout << "Cant open it Jim" << std::endl;
	}


	while (values >> curval)
	{
		numbers.push_back(curval);
	}

	//std::cout << numbers.size() << std::endl;

	for(int i = 0; i < numbers.size(); i++)
	{
		if (complete)
		{
			break;
		}
		for (int j = 0; j < numbers.size(); j++)
		{
			if (complete)
			{
				break;
			}

			for (int k = 0; k < numbers.size(); k++)
			{
				int sum = numbers[i] + numbers[j] + numbers[k];
				if (sum == 2020)
				{
					std::cout << numbers[i] << " + " << numbers[j] << " + " << numbers[k] << std::endl;
					product = numbers[i] * numbers[j] * numbers[k];
					complete = true;
					break;
					
				}
				else
				{
					continue;
				}

			}
			
		}

	}

	std::cout << "The product is " << product << std::endl;

	//std::cin.get();

	values.close();

	
}