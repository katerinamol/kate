// katrin.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include<cstdlib>
#include <vector>

using namespace std;

struct info {
	string name;
	double age;
	string pol;
	string naty;

	info(string info, double x, string p) {

		name = info;
		age = x;
		pol = p;

	}

	info(string a, double x) : name(a), age(x), pol("TEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE") {}

	info(string a) : name(a), age(1000), pol("govno") {}

	info() {
		name = "GOVNO";
		age = 1;
		pol = "HELECOPTER";

	}

	info(string a, double x, string p, string naty) : name(a), age(x), pol(p), naty(naty) {}
};


struct shop {
	string name;
	int price;
	double count;

	shop(string g, int p, double q) {
		name = g;
		price = p;
		count = q;

	}

	shop() {
		name = "govno";
		price = 5;


	};
};

vector<shop> goods;
//string g, int p, double q;
//void i() {
//	int wallet = 500;
//	std::cout << wallet << "\n" ;
//
//	string user;
//	std::cin >> user ;
//	if (user >= ) {
//
//	}
//
//}






int main() {
	srand(time(0));
	std::locale::global(std::locale("en_US.UTF-8"));


	//setlocale(LC_ALL, "UTF-8");
	/*info mas[4]{ {"test", 2, "PORNO", "UZBEK"}, info("katrin",18), info("kolya", 20, "man"), info("dasha",25,"woman","russian")};

	for (int i = 0; i < 4; i++) {

		std::cout << mas[i].name << " " << mas[i].age << " " << mas[i].pol << " " << mas[i].naty << "\n";
	}*/
	/*vector<info> user;
	user.push_back(info());
	user.push_back({"katrin",18,"woman", "russian"});
	user.push_back(info("dasha", 25, "woman", "russian"));
	user.push_back(info("test", 2, "PORNO", "UZBEK"));

	for (int i = 0; i < user.size(); i++) {
		std::cout << user[i].name << " " << user[i].age << " " << user[i].pol << " " << user[i].naty << "\n";
	}*/

	goods.push_back({ "banana", 20, 30 });
	goods.push_back({ "appless", 35 , 20 });
	goods.push_back({ "oranges", 25, 15 });
	goods.push_back({ "grape", 15, 25 });
	goods.push_back({ "chizz", 0 , 200 });

	int wallet = 500;
	string user;

	while (true) {

		std::cout << "name\t price\t count\n";
		for (int i = 0; i < goods.size(); i++)
		{
			std::cout << goods[i].name << "\t" << goods[i].price << "\t" << goods[i].count << "\n";

		}


		std::cout << wallet << "\n";

		std::cin >> user;

		for (int i = 0; i < goods.size(); i++) {

			if (user == goods[i].name && goods[i].count > 0)
			{
				std::cout << "Yes, it is in stock" << "\n";

				int user;
				std::cin >> user;

				if (user <= goods[i].count) {

					std::cout << "Yes, it is in stock" << "\n";

					if (goods[i].price * user <= wallet) {
						//чтобы отнималась количество и сумма от кошелька
						std::cout << "yes" << " " << goods[i].price * user << "\n";

					}
					else {
						std::cout << "Sorry, but we don't have this in stock" << "\n";
						break;
					}

				}
				else {
					std::cout << "Sorry, but we don't have this in stock" << "\n";
					break;
				}
			}
			/*else {
				std::cout << "Sorry, but we don't have this in stock" << "\n";
				break;

			}*/
		}
	}
}

//int main() {

//	int m[4]{ 7,6,-2,1 };
//	for (int i = 0; i < 4; i++) {
//		std::cout << m[i] << "\n";
//	}






//}