// katrin.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include<cstdlib>
#include <vector>

using namespace std;

void score() {
	int a = 4;
	int b = 2;
	int s = 3;
	int c = a + b;
	std::cout << "c = " << c << "\n";
	int d = a - b;
	std::cout << "d = " << d << "\n";
	int e = a * b;
	std::cout << "e = " << e << "\n";
	int f = a / b;
	std::cout << "f = " << f << "\n";
	float h = s % b;
	std::cout << "h = " << h << "\n";

}

void security() {

	int age;
	std::cin >> age;

	if (age >= 18 && age <= 30) {

		std::cout << "welcom";
	}
	else {
		std::cout << "you lose";
	}
}

void security2() {
	int age;
	std::cin >> age;

	if (age <= 18) {

		std::cout << "no";
	}
	else if(age >= 30) {
		std::cout << "old";
	}
	else {
		std::cout << "welcom";
	}

}

void random() {

	int random = 1 + rand() % 10;

		int user;
	for (int i = 0; i < 10; i++) {
		
	
		std::cout << random << "\n";
		std::cin >> user;
		if (user == random) {
			std::cout << "you win\n";
			random = 1 + rand() % 10;
		}
		else {
			std::cout << "you lose\n";
		}
	}
	
}



void game()
{
	std::string user;
	std::string a[3]{ "rock","paper","scissors" };
	
	for (int i = 0; i < 3; i++) {
		int random = 1 + rand() % 3;
		std::cout << a[random] << "\n";
	}

}

 
int main() {
	
	srand(time(0));

	random();
	
	
}
	

