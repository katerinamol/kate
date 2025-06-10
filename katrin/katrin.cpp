// katrin.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

void start();
void game();

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


	/*int a[5]{ -7, 5, 1, -2, 9 };

	for (int g = 0; g < 5; g++)
	{
		if (0 > a[g]) {
			std::cout << a[g] << " ";
		}
	}*/


	/*char t[4]{ 'r','e','a','d' };

	for (int q = 0; q < 4; q++)
	{

		std::cout << t[q];



	/*std::string s[2];
	s[0] = "hello";
	s[1] = "world!";

	int r = rand() % 2;

	std::cout << s[r];*/

	/*std::string a = "GOOOOOL? OR NOT";

		std::cout << a ;
	*/


}

void game() {

	 // 1rock
	 // 2scissors
	 // 3paper

	std::string user;
	std::string q[3]{ "rock","scissors","paper" };
	
	for (int i = 0;i < 3;) {

		int r = rand() % 3;
		std::cout << q[r] << std::endl;

		std::cin >> user;

		if (user == q[0] && q[r] == q[1] ||
			user == q[1] && q[r] == q[2] ||
			user == q[2] && q[r] == q[0])
		{

			std::cout << "you win\n";
			r = rand() % 3;
			i++;

			randomnamber();



		}
		else if (user == q[r]) {

			std::cout << " draw \n";


		}
		else {

			std::cout << " you lose \n ";

		}

	}

}

void start() {

	std::cout << " Hello\n Let's play?\n yes/no?\n";
	std::string user;
	std::cin >> user;
	if (user == "yes" ) {
		game() ;
	}
	else {
		std::cout << " bue ";
	}

}


 
int main() {
	srand(time(0));

	start();
}