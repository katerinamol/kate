// katrin.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


void  randomnamber() {

	int random = 1 + rand() % 10;

	int y;


	for (int f = 0;f < 3;) {

		std::cout << "random " << random;
		std::cin >> y;


		if (y == random)
		{

			std::cout << " you win\n";
			random = 1 + rand() % 10;
			f++;


		}
		else
		{
			std::cout << " you lose\n";

		}

	}


}



void game() {

	 //1 rock
	 // 2scissors
	 // 3paper


	int user;


	for (int i = 0; i < 5; i++) {
		
	int bot = 1 + rand() % 3;
		std::cin >> user;

		std::cout << bot;

		if (user == 1 && bot == 2 ||
			user == 2 && bot == 3 ||
			user == 3 && bot == 1)
		{

			std::cout << "you win \n";

			


        }
		else if (user == bot) {

			std::cout << " draw \n";
			

		}
		else {

			std::cout << " you lose \n ";
			
		}

	}





}
 
int main() {
	srand(time(0));


	game();

}