#include "PW.h"

// Синоним списка для упрощения написания кода
typedef std::list<float> List_f;

// Функция вывода каждого элемента в консоль
auto print = [](const List_f::value_type& elem)
{
	std::cout << elem << ' ';
};

// Переменная максимального значения дипазона (не включительно)
int rMax = 1;

// Функция рандомного заполнения списка целочисленными значениями в диапазоне [0; rMax)
auto randomInt = []()
{
	return int(rand() % rMax);
};



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
	std::cout << "{ ";
	std::for_each(L1.begin(), L1.end(), print);
	std::cout << "}\n\n";



	// Заполнение через std::generate
	std::cout
		<< "Именение всех элементов float-списка\n"
		<< "целочисленными значениями в диапазоне [0; 99]:\n";
	rMax = 100;
	std::generate(L1.begin(), L1.end(), randomInt);

	// Вывод данных
	std::cout << "{ ";
	std::for_each(L1.begin(), L1.end(), print);
	std::cout << "}\n";

	return 0;
}