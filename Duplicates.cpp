// Duplicates.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include <vector>

void makeUnique(std::vector<int> &v)
{
	std::vector<int>::iterator ip;
	ip = std::unique(v.begin(), v.end());
	v.resize(std::distance(v.begin(), ip));
}

std::vector<int> getDuplicates(std::vector<int> &v)
{
	std::vector<int> duplicates;
	for(int i = 0; i < v.size()-1; i++)
	{
		if(v[i] == v[i+1])
		{
			duplicates.push_back(v[i]);
		}
	}
	return duplicates;
}

int main()
{
	std::vector<int> numbers;
	for(int item; std::cin >> item;)
	{
		numbers.push_back(item);
	}
	std::sort(numbers.begin(), numbers.end());
	auto duplicates = getDuplicates(numbers);
	makeUnique(duplicates);
	for(int num : duplicates)
	{
		std::cout << num << " ";
	}

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
