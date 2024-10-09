#include <iostream>

int main()
{
	//A 10 by 10 2 dimensial array using list initialisation
	//'=' = water, 'g' = grass, 'H' = walls, 'T' = trees, 'c' = concrete
	char adventureMap[10][10] = {
		{'=', '=', '=', '=', '=', '=', '=', '=', '=', '='},
		{'=', '=', 'g', 'g', 'g', 'g', 'g', '=', '=', '='},
		{'=', 'g', 'g', 'g', 'g', 'g', 'g', 'g', '=', '='},
		{'=', 'g', 'g', 'H', 'H', 'H', 'H', 'g', 'g', '='},
		{'=', 'g', 'g', 'H', 'c', 'c', 'c', 'g', 'T', '='},
		{'=', 'g', 'g', 'H', 'c', 'c', 'c', 'g', 'g', '='},
		{'=', '=', 'g', 'H', 'H', 'H', 'H', 'g', '=', '='},
		{'=', '=', 'g', 'g', 'g', 'g', 'g', 'g', '=', '='},
		{'=', '=', '=', 'T', 'g', 'g', 'T', '=', '=', '='},
		{'=', '=', '=', 'g', 'T', 'T', '=', '=', '=', '='}
	};

	int playerXPos = 4;
	int playerYPos = 4;
	char direction = 'e';



	while (direction != 'q')
	{
		std::cout << "You are at coordinates (" << playerXPos << ", " << playerYPos << ") on ";

		//determine what terrain the player is on
		char terrain = adventureMap[playerXPos][playerYPos];
		switch (terrain)
		{
		case '=': std::cout << "water" << std::endl;
			break;
		case 'g': std::cout << "grass" << std::endl;
			break;
		case 'H': std::cout << "a wall" << std::endl;
			break;
		case 'c': std::cout << "concrete" << std::endl;
			break;
		case 'T': std::cout << "under a tree" << std::endl;
			break;
		}

		//Ask the player for a direction
		std::cout << "Which direction do you want to move? (n = north, s = south, e = east, w = west, q = quit" 
			<< std::endl;
		std::cin >> direction;

		//Update the players position
		if (direction == 'n' && playerYPos > 0 ) {
			playerYPos--;  // Move north
		}
		else if (direction == 's' && playerYPos < 9) {
			playerYPos++;  // Move south
		}
		else if (direction == 'e' && playerXPos < 9) {
			playerXPos++;  // Move east
		}
		else if (direction == 'w' && playerXPos > 0) {
			playerXPos--;  // Move west
		}
		else if (direction == 'q') {
			std::cout << "Exiting the game.\n";
			break;  // Exit the loop
		}
		else {
			std::cout << "Invalid direction or out of bounds.\n";
		}
	}

	return 0;
}

