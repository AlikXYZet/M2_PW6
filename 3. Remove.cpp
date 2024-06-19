#include "PW.h"

// Предикат: Если больше 3
auto remove_list = [](const List_i::value_type& elem)
{
	return elem > 3;
};



int main3()
{
	// Инициализация списка с типом int
	List_i LR;

	// Заполнение через std::generate
	std::cout
		<< "Заполнение int-списка новыми элементами\n"
		<< "с целочисленными значениями в диапазоне [0; 9]:\n";
	rMax = 10;
	std::generate_n(std::back_inserter(LR), 10, randomInt);

	// Вывод данных
	print_list(LR);



	// Удаление элементов по условию (фильтрация)
	std::cout
		<< "Удаление элементов, что больше 3:\n";

	// Удаление старых элементов списка в диапазоне:
	LR.erase(
		std::remove_if(LR.begin(), LR.end(), remove_list), // от конца новых элементов,
		LR.end()); // до конца списка

	// Вывод данных
	print_list(LR);

	return 0;
}