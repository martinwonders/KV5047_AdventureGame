#include <iostream>

int main()
{
	//A 10 by 10 2 dimensial array using list initialisation
	//'=' = water, 'g' = grass, 'H' = walls, 'T' = trees
	char adventureMap[10][10] = {
		{'=', '=', '=', '=', '=', '=', '=', '=', '=', '='},
		{'=', '=', 'g', 'g', 'g', 'g', 'g', '=', '=', '='},
		{'=', 'g', 'g', 'g', 'g', 'g', 'g', 'g', '=', '='},
		{'=', 'g', 'g', 'H', 'H', 'H', 'H', 'g', 'g', '='},
		{'=', 'g', 'g', 'H', 'g', 'g', 'H', 'g', 'T', '='},
		{'=', 'g', 'g', 'H', 'g', 'g', 'H', 'g', 'g', '='},
		{'=', '=', 'g', 'H', 'H', 'H', 'H', 'g', '=', '='},
		{'=', '=', 'g', 'g', 'g', 'g', 'g', 'g', '=', '='},
		{'=', '=', '=', 'T', 'g', 'g', 'T', '=', '=', '='},
		{'=', '=', '=', 'g', 'T', 'T', '=', '=', '=', '='}
	};

	//Loop through the row indices from 0 to 10
	for (int row = 0; row < 10; row++)
	{
		//Loop through the column indices from 0 to 10 while 
		//the current row index remains fixed
		for (int column = 0; column < 10; column++)
		{
			//use row and column to index into the 2D array
			std::cout << adventureMap[row][column] << " ";
		}
		std::cout << std::endl;
	}
}

