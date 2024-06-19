#include "PW.h"



int main1()
{
	// Инициализация списка с типом float
	List_f L1;

	// Заполнение через std::generate
	std::cout
		<< "Заполнение float-списка новыми элементами\n"
		<< "с целочисленными значениями в диапазоне [0; 9]:\n";
	rMax = 10;
	std::generate_n(std::back_inserter(L1), 10, randomInt);

	// Вывод данных
	print_list(L1);



	// Заполнение через std::generate
	std::cout
		<< "Именение всех элементов float-списка\n"
		<< "целочисленными значениями в диапазоне [0; 99]:\n";
	rMax = 100;
	std::generate(L1.begin(), L1.end(), randomInt);

	// Вывод данных
	print_list(L1);

	return 0;
}