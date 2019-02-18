#include <iostream>

int main()
{
	int maxsize = 5;
	int values[] = {2, 4, 3, 1, 7};
	int total = 0;
	for(int i = 0; i < maxsize; ++i)
	{
		total += values[i];
	}
	std::cout << total << std::endl;
	return 0;
}
