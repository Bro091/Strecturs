#include<iostream>
#include <string>
struct myDate {
			int day = 1;
			int month = 1;
			int year = 1970;
	};
		struct myPerson {
			std::string name = "noname";
			myDate birthday;
			std::string job = "programer";
			int salary = 45000;
		};

void print_myPerson(const myPerson& MP) {
	std::cout << "Name: " << MP.name << std::endl;
	std::cout << "Birthday: " <<
		MP.birthday.day << '.' <<
		MP.birthday.month << '.' <<
		MP.birthday.year << std::endl;
	std::cout << "Job: " << MP.job << std::endl;
	std::cout << "Salary: " << MP.salary << std::endl;
}

myPerson input_myPerson() {
	myPerson tmp;
	std::cout << "Enter name -> ";
	std::getline(std::cin, tmp.name);
	std::cout << "Enter birthday day -> ";
	std::cin >> tmp.birthday.day;
	std::cout << "Enter birthday month -> ";
	std::cin >> tmp.birthday.month;
	std::cout << "Enter birthday year -> ";
	std::cin >> tmp.birthday.year;
	std::cin.ignore();
	std::cout << "Enter job -> ";
	std::getline(std::cin, tmp.job);
	std::cout << "Enter salary -> ";
	std::cin >> tmp.salary;


	return tmp;
}

struct coinsKeeper {
		std::string name = "nomename";
		int age = 0;
		int coins_number = 0;
		int* coins = nullptr;
	};

void print_coinsKeeper(const coinsKeeper& CK) {
	std::cout << "Имя: " << CK.name << std::endl;
	std::cout << "Возраст: " << CK.age << std::endl;
	std::cout << "Монеты: ";
	for (int i = 0; i < CK.coins_number; i++)
	std::cout << CK.coins[i] << ' ';
	std::cout <<std::endl;
}
inline int year_of_birth(const coinsKeeper& CK, int year) {
	return (year - CK.age);
}
int cash(const coinsKeeper& CK) {
	int sum = 0;
	for (int i = 0; i < CK.coins_number; i++)
		sum += CK.coins[i];
	return sum;
}

int main() {
	setlocale(LC_ALL, "RUSSIAN");
		int n;
	//Структура person
	/*struct person { // струкутра person, описывающая содержимое объекта
		std::string name; // поле структуры типа string с именем персоны
		int age; // поле структуры типа int  с возрастом персоны
		std::string gender;
		std::string job;
		int salary;

	} p1, p2{ "Teresa Lucas", 24, "female", "actres", 65000 }; // создание объектов структуры
	// один из которых мнгновенно инициализируется

	// Обращение к полям объектов, как к обычным переменным
	p1.name = "Tom Smith";
	p1.age = 26;
	p1.gender = "male";
	p1.job = "programer";
	p1.salary = 80000;

	std::cout << "Name: " << p1.name << std::endl;
	std::cout << "Age: " << p1.age << std::endl;
	std::cout << "Gender: " << p1.gender << std::endl;
	std::cout << "Job: " << p1.job << std::endl;
	std::cout << "Salary: " << p1.salary << std::endl;

	std::cout << "===========================\n";

	std::cout << "Name: " << p2.name << std::endl;
	std::cout << "Age: " << p2.age << std::endl;
	std::cout << "Gender: " << p2.gender << std::endl;
	std::cout << "Job: " << p2.job << std::endl;
	std::cout << "Salary: " << p2.salary << std::endl;

	person p3{ // альтернативный способ создания объекта
		"Arnold Shvani",
		50,
		"male",
		"director",
		120000
	};

	person p4;
	p4 = p3; // копирование значений полей объекта p3 в поля объекта p4 

	std::cout << "===========================\n";

	std::cout << "Name: " << p4.name << std::endl;
	std::cout << "Age: " << p4.age << std::endl;
	std::cout << "Gender: " << p4.gender << std::endl;
	std::cout << "Job: " << p4.job << std::endl;
	std::cout << "Salary: " << p4.salary << std::endl;*/

	// Структура date
		/*struct date { //структура с полями по умолчанию
			int day = 1;
			int month = 1;
			int year = 1970;
			std::string note = "empty"; // в консоли выводиться пустота - " "

		};
		date d1{ 1, 5, 2010 };
		std::cout << 
			d1.day << '.' << 
			d1.month << '.' << 
			d1.year << " - " <<
			d1.note << std::endl; // 1.5.2010 - empty
		// если мы не указываем ГОД, то всегда выводить 1970*/

	//Структуры myDate и myPerson
	/*	myPerson mp{
			"Ivan Ivanov",
			{ 29, 7, 1998 },
			"designer",
			90000
		};

		print_myPerson(mp);

		myPerson* pointer = &mp;
		std::cout << pointer->name << std::endl; // -> - специальный символ, для обращения к  полю объекта через указатель

		myPerson mp2 = input_myPerson();
		std::cout << "=====================\n";
		print_myPerson(mp2);*/

	//Задача 1. Хранитель монет
		std::cout << "Задача 1.\nИнформация об объекте:\n";
		coinsKeeper ck{
			"Peter",
			10,
			7,
			new int[7]{ 5, 1, 2, 5, 2, 1 } // new - выделение динамической памяти
			
		};

		print_coinsKeeper(ck);
		std::cout << "Год рождения: " <<
		year_of_birth(ck, 2023) << std::endl;
		std::cout << "Общие сбережения: " << cash(ck) << std::endl;

		delete[] ck.coins; //вычещение памяти у поля coins (количества монет)
		


	return 0;
}

