#pragma once

#include <algorithm>

#include <iomanip>
#include <string>
#include <iostream>

#include <list>

//#include <type_traits>
// для std::enable_if_t не обязателен,
// так как вызывается через другие файлы stl

/*---   Предварительная инициализация   ---*/

// Синонимы списков для упрощения написания кода
typedef std::list<float> List_f;
typedef std::list<int> List_i;

// Функция вывода всех элементов в консоль
template<class T>   // Шаблон
// Органичение использования по типу:
std::enable_if_t<std::is_same_v<T, List_f> || std::is_same_v<T, List_i>>
print_list(T& L)
{
	std::cout << "{ ";
	std::for_each(L.begin(), L.end(), [](const T::value_type& elem)
		{
			std::cout << elem << ' ';
		});
	std::cout << "}\n" << std::endl;
}

// Переменная максимального значения дипазона (не включительно)
static int rMax = 1;

// Функция рандомного заполнения списка целочисленными значениями в диапазоне [0; rMax)
auto randomInt = []()
{
	return int(rand() % rMax);
};

//----------------------------------------------------------------------------------------------------

int main1();
int main2();
int main3();