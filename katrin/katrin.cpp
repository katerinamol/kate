// katrin.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>


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
void massiv() {



	/*int r[3];
	r[0] = 5;
	r[1] = 8;
	r[2] = 94;

	for (int y = 0; y < 3; y++)
	{
		std::cout << r[y] << "\n";
	}*/


	int a[5]{ -7, 5, 1, -2, 9 };

	for (int g = 0; g < 5; g++)
	{
		if (0 > a[g]) {
			std::cout << a[g] << " ";
		}
	}


	/*char t[4]{ 'r','e','a','d' };

	for (int q = 0; q < 4; q++)
	{

		std::cout << t[q];
	}



	std::string s[2];
	s[0] = "hello";
	s[1] = "world!";

	for (int d = 0; d < 2; d++) {

		std::cout << s[d] << " ";
	}

*/
}

void game() {

	 // 1rock
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


	massiv();
}