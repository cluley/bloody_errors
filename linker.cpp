#include "linkеr.h"//опечатка в имени подключаемого файла

void ordering() {
	int a(0), b(0), c(0);

	std::cout << "Введите первое число: ";
	std::cin >> a;
	std::cout << "Введите второе число: ";
	std::cin >> b;
	std::cout << "Введите третье число: ";
	std::cin >> c;

	int resultMax;
	resultMax = a > b ? (a > c ? a : c) : (b > c ? b : c);

	int resultMin;
	resultMin = a < b ? (a < c ? a : c) : (b < c ? b : c);

	int resultMid = a > b ? (a > c ? (c > b ? c : b) : a) : (b > c ? (c > a ? c : a) : b);

	std::cout << "Результат: "
		<< resultMax << " "
		<< resultMid << " "
		<< resultMin << std::endl;
}