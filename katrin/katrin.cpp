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

	info(string a, double x) : name(a), age(x), pol("TEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE"){}

	info(string a) : name(a), age (1000) , pol ("govno") {}

	info() {
		name = "GOVNO"; 
		age = 1;
		pol = "HELECOPTER";

	}

	info(string a, double x, string p, string naty): name(a),age (x), pol (p), naty (naty) {}
};


struct shop {
	string goods;
	double price;
	double quantity;

	shop(string g, double p, double q) {
		goods = g;
		price = p;
		quantity = q;

	}
};



	






 
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

	vector<shop> y;
	y.push_back({ "banana",20,40 });
	y.push_back({ "apples",15,60 });
	y.push_back({ "oranges",25,35 });
	y.push_back({ "grape",20,40 });

	for (int i = 0 ; i < y.size(); i++) {

		std::cout << y[i].goods << " " << y[i].price << " " << y[i].quantity << "\n";
	}
	
}
	

